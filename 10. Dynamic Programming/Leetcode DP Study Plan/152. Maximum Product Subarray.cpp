class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n= nums.size();
        int currmax=nums[0];
        int currmin=nums[0];
        int maxsubproduct=nums[0];
        for(int i=1;i<n;i++)
        {
            if(nums[i]<0)
                swap(currmax,currmin);
            currmax=max(nums[i],nums[i]*currmax);
            currmin=min(nums[i],nums[i]*currmin);
            maxsubproduct=max(maxsubproduct,currmax);
        }
        return maxsubproduct;
    }
};