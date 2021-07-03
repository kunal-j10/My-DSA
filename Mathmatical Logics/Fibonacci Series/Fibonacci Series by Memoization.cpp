/******************************************************************************
   Fibonacci series { by reducing excessive recursion}:-
                    a series of numbers in which each number (Fibonacci number) 
                    is the sum of the two preceding numbers. 
                    The simplest is the series 1, 1, 2, 3, 5, 8, etc.
                    
                    eg:- 3rd term = 2nd term + 1st term
                                  = 1 +1
                                  = 2
                    eg:- 6rd term = 5nd term + 4st term
                                  = 5 +3
                                  = 8
                                  
   Reducing excessive recursion [ MEMOIZATION ] :- 
                      create an array and initialize 
                      all of its element by -1, now after calling fib for a perticular
                      value , store that value in the array, so if next time we need 
                      to call fib for that perticular value , then we can directly 
                      get it from array and hence avoid/reduce excessive recursion.
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int fib(int n,int* arr)
{
    if(n<=1)
    {
        if(arr[n]==-1)
            arr[n]=n;
        return arr[n];
    }
    else
    {
        if(arr[n-1]==-1)
            arr[n-1]=fib(n-1,arr);
        if(arr[n-2]==-1)
            arr[n-2]=fib(n-2,arr);
        return arr[n-1]+arr[n-2];
    }
    
}

int main()
{
    cout<<"Enter term to be printed\n";
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n+1;i++)
    {
        arr[i]=-1;
    }
    cout<<n<<"th term of fibonacci series is "<<fib(n,arr);
    return 0;
}