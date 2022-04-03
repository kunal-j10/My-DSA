class Solution {
public:
    int memo[38];
    int tribo(int n)
    {
        if(n==0)
            return 0;
        if(n==1 || n==2)
           return 1; 
        if(memo[n]==-1)
        {
            return memo[n]= tribo(n-1)+tribo(n-2)+tribo(n-3);
        }
        return memo[n];
    }
    int tribonacci(int n) {
        memset(memo,-1,sizeof(memo));
        return tribo(n);
    }
};