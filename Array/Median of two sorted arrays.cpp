class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
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
        
        //finding and returning median
        if(l==1)
            return nums3[0];
        else if((m+n)%2==0)
        {
            //nums3 has even no. of element
            cout<<nums3[(l/2)-1]<<"  "<<nums3[l/2];
            int total = nums3[l/2] + nums3[l/2 -1];
            double median = (double) total/2;
            return median;
        }
        else
        {
            //nums3 has odd no. of element
            return nums3[l/2];
            
        }
        
    }
};