class Solution
{
    public:
    int FindMaxSum(int arr[], int n)
    {
        int dp[n+1];
        dp[0]=0;
        dp[1]=arr[0];
        for(int i=2;i<=n;i++)
        {
            dp[i]= max(arr[i-1]+dp[i-2],dp[i-1]);
        }
        return dp[n];
    }
};