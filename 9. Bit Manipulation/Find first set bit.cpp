class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n)
    {
        int count=1;
        while(n!=0)
        {
            if(n&1!=0)
                return count;
            count++;
            n=n>>1;
        }
        return 0;
    }
    
};