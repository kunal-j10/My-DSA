class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n)
    {
        int count=1;
        while(m!=n)
        {
            if((m&1)!=(n&1))
            {
                return count;
            }
            count++;
            m>>=1;
            n>>=1;
        }
        return -1;
    }
};