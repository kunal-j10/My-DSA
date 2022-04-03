class Solution {
public:
    int jump(vector<int>& nums) {
        int maxDist=0;
        int currRange=0;
        int count=0;
        int n=nums.size();
        if(n==1)
            return 0;
        for(int i=0;i<n-1;i++)
        {
            if(maxDist<i+nums[i])
                maxDist=i+nums[i];
            if(i==currRange)
            {
                currRange=maxDist;
                count++;
            }
        }
        return count;
    }
};