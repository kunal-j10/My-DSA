// ## Sorting
//      ** Insertion sort
//
//  Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
//  The array is virtually split into a sorted and an unsorted part. Values from the unsorted part are picked and 
//  placed at the correct position in the sorted part.

// Time Complexity: O(N2)


#include <iostream>

using namespace std;

void InsertionSort(int arr[],int n)
{
    // Suppose till arr[0] it is sorted
    // Start Insertion Sorting from arr[1] 
    
    for(int i=1;i<n;i++)
    {
        int keyToInsert = arr[i];
        int j=i-1; //Border of Sorted Part
        
        //Start checking and Insert in Sorted part
        while(j>=0 && arr[j]>keyToInsert)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=keyToInsert; //Inserting the Key
    }
    
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // Sort the array
    InsertionSort(arr,n);
    
    // Print array
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}