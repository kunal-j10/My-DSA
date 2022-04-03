int memo[21][21][21];
int lcsof3 (string A, string B, string C, int n1, int n2, int n3)
{
    if(n1==0 || n2==0||n3==0)
        return 0;
    if(memo[n1][n2][n3]==-1)
    {
        if(A[n1-1]==B[n2-1] && B[n2-1]==C[n3-1])
            return memo[n1][n2][n3] = 1 + lcsof3(A,B,C,n1-1,n2-1,n3-1);
        else
            return memo[n1][n2][n3] = max(lcsof3(A,B,C,n1-1,n2,n3),max(lcsof3(A,B,C,n1,n2-1,n3),lcsof3(A,B,C,n1,n2,n3-1)));
    }
    return memo[n1][n2][n3];
}
int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    memset(memo,-1,sizeof(memo));
    return lcsof3(A,B,C,n1,n2,n3);
}