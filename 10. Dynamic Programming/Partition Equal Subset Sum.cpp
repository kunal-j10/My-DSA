class Solution{
public:
    int subsetSum(int arr[],int n,int sum)
    {
        bool dp[n+1][sum+1];
        for(int j=0;j<=sum;j++)
            dp[0][j]=0;
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(arr[i-1]>sum)
                {
                    dp[i-1][j];
                }
                else{
                    dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int equalPartition(int N, int arr[])
    {
        int sum=0;
        for(int i=0;i<N;i++)
            sum+= arr[i];
        if(sum%2!=0)
            return 0;
        return subsetSum(arr,N,sum/2);
    }
};