//
// Taylor's series of e^x using recursion
//
#include <bits/stdc++.h>
using namespace std;

double series(int x, int n)
{
    double r;
    static double p=1,q=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        
        r=series(x,n-1);
        p=p*x;
        q=q*n;
        return (r+p/q); 
        
    }
}

int main ()
{
  cout << "Enter no. of terms \n";
  int n;
  cin >> n;
  cout<<"Enter value of x\n";
  int x;
  cin>>x;
  double result = series(x,n);
  cout <<"e"<<"^"<<x<<" upto "<<n<<" terms "<<" = "<<result;
}
