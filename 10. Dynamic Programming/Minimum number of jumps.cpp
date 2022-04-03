class Solution{
  public:
    int minJumps(int arr[], int n){
        int jumps=0;
        int nextMaxRange=0;
        int currBorder=0;
        for(int i=0;i<n-1;i++)
        {
            if(i+arr[i]>nextMaxRange)
                nextMaxRange=i+arr[i];
                
            if(i==currBorder)
            {
                currBorder=nextMaxRange;
                jumps++;
            }
            if(arr[i]==0 && i==currBorder)
                return -1;
        }
        return jumps;
    }
};