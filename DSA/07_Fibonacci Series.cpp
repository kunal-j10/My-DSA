/******************************************************************************
   Fibonacci series:-
                    a series of numbers in which each number (Fibonacci number) 
                    is the sum of the two preceding numbers. 
                    The simplest is the series 1, 1, 2, 3, 5, 8, etc.
                    
                    eg:- 3rd term = 2nd term + 1st term
                                  = 1 +1
                                  = 2
                    eg:- 6rd term = 5nd term + 4st term
                                  = 5 +3
                                  = 8
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n<=1)
        return n;
    else
    {
        int t= fib(n-1)+ fib(n-2);
        return t;
    }
    
}

int main()
{
    cout<<"Enter term to be printed\n";
    int n;
    cin>>n;
    cout<<n<<"th term of fibonacci series is "<<fib(n);
    return 0;
}