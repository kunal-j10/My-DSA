// factorial using recursion

#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    cout<<"Enter a number\n";
    int n;
    cin>>n;
    int factorial =fact(n);
    cout<<"Its factorial is "<<factorial;
}

