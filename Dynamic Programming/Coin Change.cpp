class Solution {
  public:
    long long int count(int S[], int m, int n) {

        long long int dp[m+1][n+1];
        for(long long int j=0;j<=n;j++)
            dp[0][j]=0;
        for(long long int i=0;i<=m;i++)
            dp[i][0]=1;
        for(long long int i=1;i<=m;i++)
        {
            for(long long int j=1;j<=n;j++)
            {
                if(S[i-1]<=j)
                {
                    dp[i][j]= dp[i-1][j] + dp[i][j-S[i-1]];
                }
                else{
                    // cant add this coin
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[m][n];
    }
};