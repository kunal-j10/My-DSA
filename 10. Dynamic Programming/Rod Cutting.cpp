
class Solution{
  public:
    int cutRod(int price[], int n) {
        int dp[n+1][n+1];
        for(int j=0;j<=n;j++)
            dp[0][j]=0;       // when price array is not given
        for(int i=0;i<=n;i++)
            dp[i][0]=0;       // when length is zero
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=n;j++)
            {
                if(i<=j)
                {
                    dp[i][j]=max(price[i-1]+dp[i][j-i],dp[i-1][j]);
                }
                else{
                    // no cut
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][n];
    }
};
