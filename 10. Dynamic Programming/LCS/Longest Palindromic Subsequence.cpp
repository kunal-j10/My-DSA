class Solution{
  public:
    int longestPalinSubseq(string A) {
        string B = A;
        reverse(B.begin(),B.end());
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
                if(A[i-1]==B[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        
        return dp[x][x];
    }
};