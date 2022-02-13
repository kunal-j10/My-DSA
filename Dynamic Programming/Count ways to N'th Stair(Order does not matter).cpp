class Solution{
	public:
	int memo[10002][3];
    int helper(int arr[],int w,int n)
    {
        if(w==0)
            return 1;
        if(n==0)
            return 0;
        
        if(memo[w][n]==-1)
        {
            if(arr[n-1]<=w)
            {
                return memo[w][n]= helper(arr,w-arr[n-1],n) + helper(arr,w,n-1);
            }
            else{
                return memo[w][n] = helper(arr,w,n-1);
            }
        }
        return memo[w][n];
    }
	int nthStair(int n){
	    memset(memo,-1,sizeof(memo));
	    int arr[2]={1,2};
	    return helper(arr,n,2);
	}
};