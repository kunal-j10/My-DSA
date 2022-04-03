class Solution {
public:
    int smallestRepunitDivByK(int k) {
        long long unsigned  int num = 1;
        int count = 1;
        if(k%2==0 ||k%5==0)
            return -1;
        int H[100000]={0};
        while(num%k!=0)
        {
            if(H[num%k]!=0)
                return -1;
            else{
                H[num%k]++;
                // new number's remainder will be
                // old remainder*10 + next digit;
                // we cant use the new no. itself as 
                // it may lead to cross 64-bit int.
                num=(num%k)*10 +1;
            }
            count++;
        }
        return count;
    }
};