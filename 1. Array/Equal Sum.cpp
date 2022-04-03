class Solution {
  public:
    string equilibrium(int *arr, int n) {
        int sum=0;
        int currSum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
        for(int i=0;i<n;i++)
        {
            if(currSum*2==sum-arr[i])
                return "YES";
            currSum+=arr[i];
        }
        return "NO";
    }
};