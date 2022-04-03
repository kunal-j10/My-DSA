#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {   
    string str;
    cin>>str;
    int n = str.length();
    for(int i=0;i<n;i++)
    {
        if(i!=0 || str[i]!='9')
        {
           int num = str[i] - '0';
           if(num>4)
           {
              str[i]= (9-num) + '0';
           }
        }
        
    }
    cout<<str;
    return 0;
}