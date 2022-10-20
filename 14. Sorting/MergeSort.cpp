
// ## Sorting
//      ** Merge sort
//
//  => Divide and Conquer Algorithm
//
//  The Merge Sort algorithm is a sorting algorithm that is based on the Divide and Conquer paradigm. 
//  In this algorithm, the array is initially divided into two equal halves and then they are combined in a sorted manner.

// Time Complexity: O(nlogn)
// Aux Space : O(n)


#include <iostream>

using namespace std;

void MergeTwoSortedArray(int arr[], int low, int mid, int high)
{
    int i= low;
    int j= mid+1;
    
    int temp[high-low+1];
    int k=0;
    
    while(i<=mid && j<= high)
    {
        if(arr[i]>arr[j])
            temp[k++]=arr[j++];
        else
            temp[k++]=arr[i++];
    }
    while(i<=mid)
        temp[k++]=arr[i++];
    while(j<=high)
        temp[k++]=arr[j++];
    
    i=low;
    k=0;
    while(i<=high)
        arr[i++]=temp[k++];
}

void MergeSort(int arr[], int low, int high)
{
    // low == high ==>> one element in array
    // high>low  ==>> atleast 2 elements
    
    
    if(high>low) // if atleast 2 elements ==>> needs to be sorted *****BASE CASE
    {
        int mid = (low+high)/2;
        
        MergeSort(arr,low,mid); // Sort First Half
        MergeSort(arr,mid+1,high); // Sort 2nd Half
        
        // Merge both half
        MergeTwoSortedArray(arr,low,mid,high);
        
    }
    
}

int main()
{
    int arr[] = {5, 1, 4, 2, 8};
    int n= sizeof(arr)/sizeof(arr[0]);
    
    // Sort the array
    int low =0;
    int high = n-1;
    MergeSort(arr,low,high);
    
    // Print array
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;

    return 0;
}