class Solution {
public:
    string shortestCommonSupersequence(string str1, string str2) {
        int n=str1.length();
        int m=str2.length();
        int dp[n+1][m+1];
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
        for(int j=0;j<=m;j++)
            dp[0][j]=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(str1[i-1]==str2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
            }
        }
        string S;
        int i=n,j=m;
        while(i>0 && j>0)
        {
            if(str1[i-1]==str2[j-1])
            {
                S.push_back(str1[i-1]);
                i--;
                j--;
            }
            else{
                if(dp[i][j-1]>dp[i-1][j])
                {
                    S.push_back(str2[j-1]);
                    j--;
                }
                else
                {
                    S.push_back(str1[i-1]);
                    i--;
                }
            }
        }
        while(i>0)
        {
            S.push_back(str1[i-1]);
            i--;
        }
        while(j>0)
        {
            S.push_back(str2[j-1]);
            j--;
        }
        reverse(S.begin(),S.end());
        return S;
    }
};