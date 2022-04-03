class Solution {
public:
    int memo[31];
    int fibonacci(int n)
    {
        if(n==0 || n==1)
            return n;
        if(memo[n]==-1)
            return memo[n] = fibonacci(n-1) + fibonacci(n-2);
            
        return memo[n];
    }
    int fib(int n) {
        memset(memo,-1,sizeof(memo));
        return fibonacci(n);
    }
};