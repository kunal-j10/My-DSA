class Solution{
	public:
    // Answer can be very large, so, output answer modulo 109+7
    // for that : long long  m = 1e9 + 7;
    // we will use "m" to find modulo in our code.
    
    // dont forget to consider 0 , e.g: 2+5= 2+5+0 hence two subsets
    // also note that 0 at any index i and 0 at any index j are considered diff.
    // i.e {0i,2,3} != {0j,2,3}
    // therefore, the approach is to find total subsets of zero differently
	int perfectSum(int arr[], int n, int sum)
	{
        long long  dp[n+1][sum+1];
        for(int j=0;j<=sum;j++)
            dp[0][j]=0;
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        long long  m = 1e9 + 7;
        long long  count=0;
        for(int i=0;i<n;i++)
            if(arr[i]==0)
                count++;
        count=pow(2,count);  // total subsets of zero
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]<=j && arr[i-1]!=0) // dont consider zero
               {
                   dp[i][j]=((dp[i-1][j-arr[i-1]])+(dp[i-1][j]))%m;  // do modulo of ans
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
            }
        }
        return count*dp[n][sum]; // total subsets of zero * ans without zero
	}
};