class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        sort(nums1.begin(),nums1.end()); // Sort 1st vector
        sort(nums2.begin(),nums2.end()); // Sort 2nd vector
        
        int i=0,j=0;
        int n=nums1.size();
        int m= nums2.size();
        
        vector<int> v; // vector to store final ans
        
        while(i<n && j<m)
        {
            // Skip Dublicates in 1st array
            if(i>0 && nums1[i]==nums1[i-1])
            {
                i++;
                continue;
            }
            
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else
                v.push_back(nums1[i++]); // nums1[i]==nums2[j] ==> Common element
        }
        return v;
    }
};