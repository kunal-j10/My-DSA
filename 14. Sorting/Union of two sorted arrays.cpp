class Solution{
    public:
    vector<int> findUnion(int a[], int b[], int n, int m)
    {
        int i=0,j=0;
        vector<int> v;
        while(i<n && j<m)
        {
            // Skip Dublicates of 1st vector
            if(i>0 && a[i]==a[i-1])
            {
                i++;
                continue;
            }
            
            // Skip Dublicates of 1st vector
            if(j>0 && b[j]==b[j-1])
            {
                j++;
                continue;
            }
            
            
            // Storing Union of vectors
            if(a[i]<b[j])
                v.push_back(a[i++]);
            else if(a[i]>b[j])
                v.push_back(b[j++]);
            else{
                v.push_back(a[i++]);
                j++;
            }
            
        }
        
        // Push remaining elements from 1st vector
        while(i<n)
        {
            if(i>0 && a[i]==a[i-1])
            {
                i++;
                continue;
            }
            v.push_back(a[i++]);
        }
         
        // Push remaining elements from 1st vector   
        while(j<m)
        {   if(j>0 && b[j]==b[j-1])
            {
                j++;
                continue;
            }
            v.push_back(b[j++]);
        }
            
        return v;
    }
};