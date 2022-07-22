class Solution{
	public:
	int minOperations(string str1, string str2) 
	{ 
	    int x=str1.length();
	    int y= str2.length();
	    int dp[x+1][y+1];
	    for(int i=0;i<=x;i++)
	        dp[i][0]=0;
	    for(int j=0;j<=y;j++)
	        dp[0][j]=0;
	    
	    for(int i=1;i<=x;i++)
	    {
	        for(int j=1;j<=y;j++)
	        {
	            if(str1[i-1]==str2[j-1])
	                dp[i][j]=1+dp[i-1][j-1];
	            else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	    }
	    int k=dp[x][y];
	    return x-k+y-k;
	} 
};
