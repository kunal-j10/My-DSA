class Solution {
  public:
    int canReach(int A[], int N) {
        int maxDist=0;
        for(int i=0;i<N;i++)
        {
            if(maxDist<i)
                return 0;
            
            maxDist=max(maxDist,i+A[i]);
        }
        return 1;
    }
};