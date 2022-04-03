class Solution{
public:
    int memo[101][101];
    int MCM(int arr[],int i,int j)
    {
        if(i>=j)
            return 0;
        if(memo[i][j]==-1)
        {
            int mn = INT_MAX;
            for(int k=i;k<j;k++)
            {
                int temp = MCM(arr,i,k) + MCM(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
                mn=min(mn,temp);
            }
            return memo[i][j]=mn;
        }
        return memo[i][j];
    }
    int matrixMultiplication(int N, int arr[])
    {
        memset(memo,-1,sizeof(memo));
        return MCM(arr,1,N-1);
    }
};