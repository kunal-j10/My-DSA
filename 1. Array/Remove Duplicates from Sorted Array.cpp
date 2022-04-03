//Remove Duplicates from Sorted Array


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==nums[i+1])
            {
                nums.erase(nums.begin()+i+1);
                i--;
                n--;
            }
        }
        return n;
        
    }
};