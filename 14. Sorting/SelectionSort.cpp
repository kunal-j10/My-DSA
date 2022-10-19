
// ## Sorting
//      ** Selection sort
//
//  The selection sort algorithm sorts an array by repeatedly finding the minimum element 
//  (considering ascending order) from the unsorted part and putting it at the beginning. 

// Time Complexity: O(N2)


#include <iostream>

using namespace std;

void SelectionSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int currMinIndex =i;
        for(int j =i+1;j<n;j++)
        {
            if(arr[j]<arr[currMinIndex])
                currMinIndex=j;
        }
        swap(arr[i],arr[currMinIndex]);
    }
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // Sort the array
    SelectionSort(arr,n);
    
    // Print array
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}