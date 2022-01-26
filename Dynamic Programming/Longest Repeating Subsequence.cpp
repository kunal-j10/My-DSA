// Make copy of same string and while finding LCS
// for repeating subsequences index of both string 
// should not become same i.e i!=j

class Solution {
	public:
	int LongestRepeatingSubsequence(string A){
	    string B = A;
        int x=A.length();
        int dp[x+1][x+1];
        for(int i=0;i<=x;i++)
            dp[i][0]=0;
        for(int i=0;i<=x;i++)
            dp[0][i]=0;
        for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=x;j++)
            {
                if(A[i-1]==B[j-1] && i!=j)
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[x][x];
	}
};
