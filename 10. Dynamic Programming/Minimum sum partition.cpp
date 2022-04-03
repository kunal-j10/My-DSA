class Solution{
  public:
	int minDifference(int arr[], int n)  { 
	    
	    int sum=0;
	    for(int i=0;i<n;i++)
	        sum+=arr[i];
	        
	        
	    int dp[n+1][sum+1];
	    // Initializing DP
	    for(int j=0;j<=sum;j++)
	        dp[0][j]=0;
	    for(int i=0;i<=n;i++)
	        dp[i][0]=1;
	        
	    // Choice Diagram
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=sum;j++)
	        {
	            if(arr[i-1]<=j)
	                dp[i][j]= dp[i-1][j-arr[i-1]] || dp[i-1][j];
	            else
	                dp[i][j] = dp[i-1][j];
	        }
	    }
	    
	    // min of S1-S2 = min(S1-S2)
	    //              = min(S1- (sum-S1) )
	    //              = min( 2*S1 -sum )
	    //              = min(sum- 2*S1)
	    
	    // also, S1 is all possible subset sum's
	    // i.e when i=n {considering all elements}
	    // i.e possible subset sum's in last row of DP
	    
	    int mini = INT_MAX;
	    for(int j=0;j<=sum/2;j++)
	    {
	        if(dp[n][j]==1)
	        {
	            int k = abs(sum-2*j);
	            mini = min(mini,k);
	        }
	    }
	    
	    return mini;
	} 
};