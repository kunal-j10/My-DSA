class Solution {
public:
    int memo[102];
    int helper(vector<int> nums,int n)
    {
        if(n<=0)
            return 0;
        if(memo[n]==-1)
            return memo[n] = max(nums[n-1]+ helper(nums,n-2),helper(nums,n-1));
        return memo[n];
    }
    
    int rob(vector<int>& nums) {
        memset(memo,-1,sizeof(memo));
        return helper(nums,nums.size());
    }
};