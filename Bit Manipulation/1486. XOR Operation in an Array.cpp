class Solution {
public:
    int xorOperation(int n, int start) {
        int i=0;
        int num1 = start+2*i;
        int num2;
        i++;
        while(i<n)
        {
            num2=start+2*i;
            num1=num1^num2;
            i++;
        }
        return num1;
    }
};