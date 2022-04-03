class Solution {
public:
    int memo[46];
    int helper(int n)
    {
        if(n==1 ||n==2)
            return n;
        if(memo[n]==-1)
            return memo[n]=helper(n-1)+helper(n-2);
        return memo[n];
    }
    int climbStairs(int n) {
        memset(memo,-1,sizeof(memo));
        return helper(n);
    }
};