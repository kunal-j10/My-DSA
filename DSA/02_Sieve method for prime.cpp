
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter the no. \n";
    int n;
    cin>>n;
    int prime[n+1]={0};
    
    for(int p=2;p*p<=n;p++)
    {
        if(prime[p]==0)
        {
            for(int i=p*p;i<=n;i+=p)
            {
                prime[i]=1;
            }
        }
    }
    int count=0;
    for(int p=2;p<=n;p++)
    {
        if(prime[p]==0)
        {
            count++;
        }
    }
    cout<<"no.of prime less than or equal to "<<n<<" is "<<count;
    

    return 0;
}
