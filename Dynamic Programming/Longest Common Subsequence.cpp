// method 1: Memoization

class Solution
{
    public:
    int memo[1001][1001];
    int LCS(int x, int y, string s1, string s2)
    {
        if(x==0 ||y==0)
                memo[x][y] = 0;
        else if(memo[x][y]==-1)
        {
           
            if(s1[x-1]==s2[y-1])
                memo[x][y] = 1+ LCS(x-1,y-1,s1,s2);
            else
                memo[x][y] = max(LCS(x-1,y,s1,s2),LCS(x,y-1,s1,s2));
        }
        return memo[x][y];
        
    }
    int lcs(int x, int y, string s1, string s2)
    {
        for(int i=0;i<=x;i++)
        {
            for(int j=0;j<=y;j++)
                memo[i][j]=-1;
        }
        return LCS(x,y,s1,s2);
    }
};

// method 2: Tabulation

class Solution
{
    public:
    int lcs(int x, int y, string s1, string s2)
    {
        int dp[x+1][y+1];
        for(int i=0;i<=x;i++)
            dp[i][0]=0;
        for(int j=0;j<=y;j++)
            dp[0][j]=0;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=y;j++)
            {
                if(s1[i-1]==s2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[x][y];
    }
};