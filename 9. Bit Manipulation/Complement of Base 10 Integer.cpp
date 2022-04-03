class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
            return 1;
        
        string str="";
        int complementNumber=0;
        int base = 1; // since, 2^0=1
        while(n>0)
        {
            str=str + to_string(n%2);
            n=n/2;
        }
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                complementNumber += base;       
            }
            base=base*2;
        }
        return complementNumber;
    }
};