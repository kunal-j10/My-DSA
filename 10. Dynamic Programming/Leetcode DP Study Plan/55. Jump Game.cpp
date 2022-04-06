class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==0) return 0;
        
        int maxreach=0;
        for(int i=0; i<n; i++){
            if(maxreach<i)
                return false;
            maxreach=max(maxreach, i + nums[i]);
        }
        return true;
    }
};

// ###### METHOD -2 ######
// Recursive Method

class Solution {
public:
    int helper(vector<int> &v,int i,int n)
    {
        if(i>=n)
            return 1;
        if(v[i-1]==0)
            return 0;
        int k=v[i-1];
        v[i-1]--;
        return  helper(v,i+k,n) || helper(v,i,n);
    }

    bool canJump(vector<int>& nums) {
        return helper(nums,1,nums.size());
    }
};