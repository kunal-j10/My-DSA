vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        int i=0,j=0;
        vector <int> brr;
        for(i=0,j=0;i<n && j<m;)
        {
            if(arr1[i]>=arr2[j])
            {
                brr.push_back(arr2[j]);
                j++;
            }
            else{
                brr.push_back(arr1[i]);
                i++;
            }
        }
        for(i;i<n;i++)
        {
            brr.push_back(arr1[i]);
        }
        for(j;j<m;j++)
        {
            brr.push_back(arr2[j]);
        }
        int l =brr.size();
        for(int k=0;k<l-1;k++)
        {
            if(brr[k]==brr[k+1])
            {
                brr.erase(brr.begin() + k+1);
                k--;
                l--;
            }
        }
        return brr;
    }
};