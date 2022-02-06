class Solution{
public:
    int memo[201][201][2];
    int mod=1003;
    int solve(string s,int i,int j,bool isTrue)
    {
        // base condition
        if(i>j)
            return 0;
        if(i==j)     // only one char i.e T/F
        {
            if(isTrue== true)
                return s[i]== 'T';
            else
                return s[i]=='F';
        }
        
        if(memo[i][j][isTrue]==-1)
        {
            int ans =0;
            // k goes from i+1 to j-1  
            for(int k=i+1;k<=j-1;k=k+2)
            {
                int leftTrue   = solve(s,i,k-1,true);
                int leftFalse  = solve(s,i,k-1,false);
                int rightTrue  = solve(s,k+1,j,true);
                int rightFalse = solve(s,k+1,j,false);
                
                if(s[k]=='&')
                {
                    if(isTrue==true)
                    {
                        ans+= leftTrue*rightTrue;
                    }
                    else{
                        ans+= leftFalse*rightFalse + leftTrue*rightFalse + leftFalse*rightTrue;
                    }
                }
                else if(s[k]=='|')
                {
                    if(isTrue==true)
                    {
                        ans+= leftTrue*rightFalse + leftFalse*rightTrue + leftTrue*rightTrue;
                    }
                    else{
                        ans+= leftFalse*rightFalse;
                    }
                }
                else{
                    if(isTrue==true)
                    {
                        ans+= leftTrue*rightFalse + leftFalse*rightTrue;
                    }
                    else{
                        ans+= leftFalse*rightFalse + leftTrue*rightTrue;
                    }
                }
            }
            return memo[i][j][isTrue] = ans  % mod;
        }
        return memo[i][j][isTrue];
    }
    int countWays(int N, string S){
        memset(memo,-1,sizeof(memo));
        return solve(S,0,N-1,true)  % mod;
    }
};