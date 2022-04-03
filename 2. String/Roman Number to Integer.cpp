class Solution {
  public:
    int romanToDecimal(string &str) {
        map<char,int> mp;
        int tail,head,n,sum =0;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        n=str.length();
        for(int i=0;i<n;i++)
        {
            tail = mp[str[i]];
            head = mp[str[i+1]];
            
            if(tail<head)
                sum-= tail;
            else
                sum+= tail;
        }
        return sum;
    }
};
