
// Find a pair of element with sum K
// in an Unsorted Array
// i.e a+b =k;
//
// Eg: A=[6,3,8,10,16,7,5,2,9,14] and K = 10
// ans: 8,2 and 3,7


//          Time complexity = O(n)
class Solution {
public:
    void twoSum(vector<int>& numbers, int target) {
        // we will use Hash Table approach
        int max = numbers[0];
        int min = numbers[0];
        int n = numbers.size();
        for(int i=0;i<n;i++)
        {
            if(numbers[i]>max)
                max = numbers[i];
            if(numbers[i]<min)
                min = numbers[i];
        }
        
        int H[max+1]={0};
        
        for(int i=0;i<n;i++)
        {
            if(H[target - numbers[i]]!=0)
            {
                cout<<numbers[i]<<" & "<<target-numbers[i]<<endl;
            }
            H[numbers[i]]++;
        }
        
    }
};