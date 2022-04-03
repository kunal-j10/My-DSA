class Solution{

    public:
    int trappingWater(int arr[], int n){

        int rightH[n] , leftH[n];
        int max =0;
        rightH[n-1]=0;
        leftH[0]=0;
        for(int i=n-2;i>=0;i--)
        {
            if(max<arr[i+1])
            {
                max = arr[i+1];
            }
            rightH[i]=max;
        }
        max =0;
        for(int i =1;i<n;i++)
        {
            if(max<arr[i-1])
            {
                max = arr[i-1];
            }
            leftH[i] = max;
        }
        max =0;
        for(int i=0;i<n;i++)
        {
            int k = min(leftH[i],rightH[i]) - arr[i];
            if(k>0)
            {
                max = max +k;
            }
        }
        return max;
    }
};