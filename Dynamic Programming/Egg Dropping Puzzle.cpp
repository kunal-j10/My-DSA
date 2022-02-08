class Solution
{
    public:
    int memo[201][201];
    int eggDropHelper(int n, int k) 
    {
        if(k==0 || k==1)
            return k;
        if(n==1)
            return k;
            
        if(memo[n][k]==-1)
        {
            int mn=INT_MAX;
            for(int i=1;i<=k;i++)
            {
                int temp= 1 + max(eggDropHelper(n,k-i),eggDropHelper(n-1,i-1));
                mn=min(mn,temp);
            }
            return memo[n][k] = mn;
        }
        return memo[n][k];
    }
    int eggDrop(int n, int k) 
    {
        memset(memo,-1,sizeof(memo));
        return eggDropHelper(n,k);
    }
};