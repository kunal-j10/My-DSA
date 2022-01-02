class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count = 0;
        int H[60]={0};
        for(int i=0;i<time.size();i++)
        {
            if(time[i]>=60)
                H[time[i]%60]++;
            else
                H[time[i]]++;
        }
        for(int i=0;i<60;i++)
        {
            if(H[i]>0 && i!=30 &&i!=0)
            {
                if(H[60-i]>0)
                {
                    count=count+ H[i]*H[60-i];
                    H[i]=0;
                    H[60-i]=0;
                }
            }
            if((i==30 || i==0) && H[i]>1)
            {
                count=count+ (H[i]*(H[i]-1))/2;
            }
        }
        return count;
    }
};