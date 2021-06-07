//  Find multiple missing elements in 
//  an Unsorted array.

//         time complexity O(n)


#include <stdio.h>

void missing_elements(int* arr,int l)
{
    int brr[12]={0};
    for(int i=0;i<l;i++)
    {
        brr[arr[i]]++;
    }
    for(int i=0;i<12;i++)
    {
        if(brr[i]==0 && i>=3)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int arr[7]={3,10,4,5,11,7,12};
    missing_elements(arr,7);
    
}