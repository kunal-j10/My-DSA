// Subarray with given sum
//      ####  Sliding Window Algorithm ####
//   T.C.=  O(n)


class Solution
{
    public:
    vector<int> subarraySum(int arr[], int n, int s)
    {
        vector <int> res;
        long long int currentSum=0;
        int i,j;
        for(j=0,i=0;i<n;i++)
        {
            currentSum=currentSum + arr[i];
            while(currentSum>s)
            {
                currentSum=currentSum - arr[j];
                j++;
                
            }
            if(currentSum==s)
            {
                res.push_back(j+1);
                res.push_back(i+1);
                return res;
            }
        }
        res.push_back(-1);
        return res;
    }
};