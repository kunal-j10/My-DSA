int minDeletions(string str, int n) { 
    string S2=str;
    reverse(S2.begin(),S2.end());
    int dp[n+1][n+1];
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    for(int j=0;j<=n;j++)
        dp[0][j]=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(str[i-1]==S2[j-1])
                dp[i][j]=1+ dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
        }
    }
    return n-dp[n][n];
}