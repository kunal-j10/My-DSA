int countZeroes(int arr[], int n) {
    int l=0,h=n-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if(arr[mid]==1)
            l=mid+1;
        else{
            if(mid==0 || arr[mid-1]==1)
                return n-mid;
            else
                h=mid-1;
        }
    }
    return 0;
}