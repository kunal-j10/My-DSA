/******************************************************************************

computing value of Taylor Series of e^x using Horner’s Rule. In previous problem
{Day 08 of 100 Days} time complexity was O(n^2) , where as using Horner Rule
it has been reduced to O(n).

e^x= 1+ x/1! + x/2! + x/3! + x/4!..........(n terms)

  Horner Rule  :-
e^x= 1 +x/1[ 1 + x/2[ 1 + x/3 [ 1 + x/4 ] ] ]    (upto 4 terms)   and so on for n terms 

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

double e(int x,int n)
{
    static double S;
    if(n==0)
    {
        return S;
    }
    else
    {
        S=1+x*S/n;
        return e(x,n-1);
    }
}

int main()
{
    cout<<"Enter no. of terms to be considered \n";
    int n;
    cin>>n;
    cout<<"Enter value of x \n";
    int x;
    cin>>x;
    double result =e(x,n);
    cout<<"e^"<<x<<" upto "<<n<<" terms = "<<result;
    return 0;
}
