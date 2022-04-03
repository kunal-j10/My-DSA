class Solution
{
    public:
    int memo[1001][1001];
    int KnapS(int W, int wt[], int val[], int n) 
    { 
        if(W==0 || n==0)
            return 0;
        if(memo[n][W]!=-1)
            return memo[n][W];
        if(W<wt[n-1])
            return memo[n][W] = KnapS(W,wt,val,n-1);
        else{
            return memo[n][W] = max(KnapS(W,wt,val,n-1),val[n-1]+KnapS(W-wt[n-1],wt,val,n-1));
        }
    }

    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(memo,-1,sizeof(memo));
        return KnapS(W,wt,val,n);
    }
};

// Tabulation

class Solution
{
    public:
    int knapSack(int W, int wt[], int val[], int n) 
    { 
        int dp[n+1][W+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int j=0;j<=W;j++)
            dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=W;j++)
            {
                if(j<wt[i-1])
                {
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
                }
            }
        }
        return dp[n][W];
    }
};