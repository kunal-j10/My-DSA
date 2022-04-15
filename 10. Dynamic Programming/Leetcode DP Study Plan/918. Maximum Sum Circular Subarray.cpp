class Solution {
public:
    int maxsubarray(vector<int>& nums)
    {
        int currsum=0;
        int maxsum=INT_MIN;
        int n= nums.size();
        for(int i=0;i<n;i++)
        {
            currsum+= nums[i];
            maxsum=max(maxsum,currsum);
            if(currsum<0)
                currsum=0;
        }
        
        return maxsum;
    }
    
    int maxsubarrayCircular(vector<int>& nums)
    {
        int currsum=0;
        int minsum=INT_MAX;
        int n= nums.size();
        int totalsum=0;
        for(int i=0;i<n;i++)
        {
            currsum+= nums[i];
            totalsum+=nums[i];
            minsum=min(minsum,currsum);
            if(currsum>0)
                currsum=0;
        }
        if(totalsum==minsum)
            return INT_MIN;
        return totalsum - minsum;
    }
    
    
    int maxSubarraySumCircular(vector<int>& nums) 
    {
        return max(maxsubarrayCircular(nums),maxsubarray(nums));
        
    }
};