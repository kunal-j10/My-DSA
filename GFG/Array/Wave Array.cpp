#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // Function to convert given array to wave like array
    // arr: input array
    // n: size of array
    void convertToWave(int *arr, int n){
        int temp;
        if(n%2!=0)
        {
            for(int i=0;i<n;i=i+2)
            {
                temp = arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                
                if(i+3==n)
                   {
                       break;
                   }
            }
        }
        else
        {
        for(int i=0;i<n;i=i+2)
            {
              temp = arr[i];
              arr[i]=arr[i+1];
              arr[i+1]=temp;
            }
        }   
    }
};

int main()
{
    int t,n;
    cin>>t; //Input testcases
    while(t--) //While testcases exist
    {
        cin>>n; //input size of array
        int a[n]; //declare array of size n
        for(int i=0;i<n;i++)
            cin>>a[i]; //input elements of array
        Solution ob;  //creating ob object of solution class
        ob.convertToWave(a, n);  //passing a and n to convertToWave

        for(int i=0;i<n;i++)
            cout<<a[i]<<" "; //print array
            
        cout<<endl;
    }
} 