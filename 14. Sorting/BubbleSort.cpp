// ## Sorting
//      ** Bubble sort
//
//  Bubble Sort is the simplest sorting algorithm that works by repeatedly swapping the adjacent elements 
//  if they are in the wrong order. This algorithm is not suitable for large data sets as its average 
//  and worst-case time complexity is quite high.

// Time Complexity: O(N2)


//      5, 1, 4, 2, 8

#include <iostream>

using namespace std;

void BubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j =0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // Sort the array
    BubbleSort(arr,n);
    
    // Print array
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}
