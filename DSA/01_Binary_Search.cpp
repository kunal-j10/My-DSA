#include <iostream>
using namespace std;

int binarySearch(int *arr,int a,int l,int h)
{
    if(l<=h)
    {
        int mid=(l+h)/2;
        if(arr[mid]==a)
        {
            return mid;
        }
        else if(a<arr[mid])
        {
            return binarySearch(arr,a,l,mid-1);
        }
        else if(a>arr[mid])
        {
            return binarySearch(arr,a,mid+1,h);
        }
    }
    else
    {
        return -1;
    }
    
    
    
}

int main()
{
    int n;
    cout<<"Enter no. of elements\n";
    cin>>n;
    cout<<"Enter sorted elements\n";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched\n";
    int a;
    cin>>a;
    int l= 0;
    int h = n-1;
    int s=binarySearch(arr,a,l,h);
    cout<<"element is present at "<<s+1;

    return 0;
}
