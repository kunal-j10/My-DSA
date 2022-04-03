//  Find multiple missing elements in 
//  a sorted array.

//         time complexity O(n^2)


#include <stdio.h>

void missing_elements(int* arr,int l)
{
    int d= arr[0]-0;
    for(int i=0;i<l;i++)
    {
        if(arr[i]-i != d)
        {
            while(d<arr[i]-i)
            {
                printf("%d\n",i+d);
                d++;
            }
        }
    }
}

int main()
{
    int arr[7]={3,4,5,7,10,11,12};
    missing_elements(arr,7);
    
}