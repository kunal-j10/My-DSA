// finding power of a number .
// with base as well as exponent
// both taken as input from user
// eg. 2^4 = 16
//     3^5 = 243


#include <bits/stdc++.h>
using namespace std;

int power (int m,int n)
{
  if (n == 0)
    {
      return 1;
    }
  else
    {
      return m * power(m,n-1);
    }
}

int main ()
{
  cout << "Enter base number\n";
  int m;
  cin >> m;
  cout<<"Enter exponent of no. \n";
  int n;
  cin>>n;
  int result = power(m,n);
  cout <<m<<"^"<<n<<" = "<<result;
}
