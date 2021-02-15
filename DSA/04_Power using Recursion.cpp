// factorial using recursion

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
