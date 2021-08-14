// Kadane's Algorithm
// T.C  O(n)
// 
//  contiguous subarray which has the largest sum

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currentSum=0;
        int maxSum = INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            currentSum = currentSum + nums[i];
            if(currentSum>maxSum)
            {
                maxSum=currentSum;
            }
            if(currentSum<0)
            {
                currentSum =0;
            }
        }
        return maxSum;
    }
};


//       cummulative sum approach
//       precomputing
//       O(n*n) time complexity

// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size(); 
//         int arr[n];
//         arr[0]=nums[0];
//         int currentSum =0;
//         int maxSum = INT_MIN;
//         for(int i=1;i<n;i++)
//         {
//             arr[i]=arr[i-1]+nums[i];
//         }
        
//         for(int i=0;i<n;i++)
//         {
//             currentSum =0;
//             for(int j=i;j<n;j++)
//             {
//                 currentSum = currentSum + nums[j];
//                 if(maxSum<currentSum)
//                 {
//                     maxSum =currentSum;
                    
//                 }
            
//             }
            
//         }
//         return maxSum;
        
        
//     }
// };