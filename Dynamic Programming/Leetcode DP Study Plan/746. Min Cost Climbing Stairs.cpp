class Solution {
public:
    int memo[1004];
    // memo[i+1] denotes cost when length is i+1;
    // i.e if i==-1 then i+1 = 0 i.e cost when length is zero . 
    int helper(vector<int> cost,int i,int n)
    {
        if(i>=n-2)
            return 0;
        if(memo[i+1]==-1)
            return memo[i+1] = min(cost[i+1]+helper(cost,i+1,n),cost[i+2]+helper(cost,i+2,n));
        return memo[i+1];
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(memo,-1,sizeof(memo));
        return helper(cost,-1,cost.size());
    }
};