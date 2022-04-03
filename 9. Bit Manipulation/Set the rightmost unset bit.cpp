class Solution
{
public:
    int setBit(int N)
    {
        int tempN=N;
        int count=0;
        while(tempN!=0)
        {
            if((tempN&1)==0)
                return (N |(1<<count));
            count++;
            tempN>>=1;
        }
        return N;
    }
};