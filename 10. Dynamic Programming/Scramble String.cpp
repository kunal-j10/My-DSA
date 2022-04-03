class Solution {
public:
    map<string,bool>mp;
    bool solve(string s1,string s2)
    {
        if(s1.compare(s2)==0)
            return 1;
        if(s1.length()<=1)
            return 0;
        
        string temp=s1;
        temp+="$" +s2;
        if(mp.find(temp)!=mp.end())
            return mp[temp];
        bool flag =0;
        int n= s1.length();
        for(int i=1;i<=n-1;i++) // i is length not index
        {
            //condition 1 :- NO SWAP 
            if(solve(s1.substr(0,i),s2.substr(0,i)) && 
               solve(s1.substr(i,n-i),s2.substr(i,n-i)))
            {
                flag=1;
                break;  //break to avoid further calls
            }
            
            //condition 2 :- SWAP
            if(solve(s1.substr(0,i),s2.substr(n-i,i)) && 
               solve(s1.substr(i,n-i),s2.substr(0,n-i)))
            {
                flag=1;
                break;
            }
        }
        mp[temp]=flag;
        return flag;
    }
    bool isScramble(string s1, string s2) {
        if(s1.length()!=s2.length())
            return 0;
        if(s1.length()==0 && s2.length()==0)
            return 1;
        return solve(s1,s2);
    }
};