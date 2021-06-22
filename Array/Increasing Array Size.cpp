/******************************************************************************
increasing size of an array from 5 to 7,
by, copying all elements of array p {size 5}
to an array q {size 7} and then make p point to q.
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int* p = (int *)malloc(5*sizeof(int));
    p[0]=1;
    p[1]=2;
    p[2]=3;
    p[3]=4;
    p[4]=5;
    int* q = (int *)malloc(7*sizeof(int));
    
    for(int i=0;i<5;i++)
    {
        q[i]=p[i];
    }
    free(p);
    p=q;
    q=NULL;
    p[5]=60;
    p[6]=700;
    
    for(int i=0;i<7;i++)
    {
        cout<<p[i]<<"\n";
    }
    return 0;
}
