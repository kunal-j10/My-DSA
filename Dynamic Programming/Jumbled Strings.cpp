class Solution{
	public:
	int TotalWays(string str){
	    int md= 1e9 +7;
	    string s = "GEEKS";
	    int n= str.length();
	    int m= s.length();
	    int dp[n+1][m+1];
	    unordered_map<char,int> mp;
	    for(int j=0;j<=m;j++)
	        dp[0][j]=0;
	    for(int i=0;i<=n;i++)
	        dp[i][0]=1;
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=m;j++)
	        {
	            if(str[i-1]==s[j-1])
	            {
                    dp[i][j]=(dp[i-1][j-1]%md + dp[i-1][j]%md)%md;
	            }
	            else{
	                dp[i][j]=dp[i-1][j]%md;
	            }
	        }
	    }
	    return dp[n][m];
	}
};