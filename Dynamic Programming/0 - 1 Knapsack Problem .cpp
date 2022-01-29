class Solution
{
    public:
    int memo[1001][1001];
    int KnapS(int W, int wt[], int val[], int n) 
    { 
        if(W==0 || n==0)
            return 0;
        if(memo[n][W]!=-1)
            return memo[n][W];
        if(W<wt[n-1])
            return memo[n][W] = KnapS(W,wt,val,n-1);
        else{
            return memo[n][W] = max(KnapS(W,wt,val,n-1),val[n-1]+KnapS(W-wt[n-1],wt,val,n-1));
        }
    }

    int knapSack(int W, int wt[], int val[], int n) 
    { 
        memset(memo,-1,sizeof(memo));
        return KnapS(W,wt,val,n);
    }
};
