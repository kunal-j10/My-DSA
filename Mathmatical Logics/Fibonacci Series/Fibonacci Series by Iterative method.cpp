/******************************************************************************
   Fibonacci series { by iterative method }:-
                    a series of numbers in which each number (Fibonacci number) 
                    is the sum of the two preceding numbers. 
                    The simplest is the series 1, 1, 2, 3, 5, 8, etc.
                    
                    eg:- 3rd term = 2nd term + 1st term
                                  = 1 +1
                                  = 2
                    eg:- 6rd term = 5nd term + 4st term
                                  = 5 +3
                                  = 8
                                  
 **by this method time complexity is of order n, i.e O(n).
 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter term to be printed\n";
    int n;
    cin>>n;
    int a=0,b=1;
    int n1=a, n2=b;
    int t;
    if(n<=1)
     t=n;
    else
    {
        for(int i=1;i<=n;i++)
        {
        t=n1+n2;
        n2=n1;
        n1=t;
        }
    }
    cout<<n<<"th term of fibonacci series is "<<t;
    return 0;
}