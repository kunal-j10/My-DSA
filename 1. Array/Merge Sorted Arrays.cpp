class Solution {
public:
    void MergeSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int l=m+n;
        int nums3[n+m];
        int i=0;
        int j=0;
        int k=0;
        
        //merging the arrays/vectors
        while(i<n && j<m)
        {
            if(nums1[i]<nums2[j])
                nums3[k++]=nums1[i++];
            else
                nums3[k++]=nums2[j++];
        }
        for(;i<n;i++)
            nums3[k++]=nums1[i];
        for(;j<m;j++)
            nums3[k++]=nums2[j];

        // printing merged array/vector
        for(int b=0;b<l;b++)
        {
           cout<<nums3[b]<<endl;
        }
        

    }
};