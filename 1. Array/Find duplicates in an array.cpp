class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int H[100000]={0};
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            H[arr[i]]++;
        }
        for(int j=0;j<100000;j++)
        {
            if(H[j]>1)
                v.push_back(j);
        }
        if(v.size()==0)
            v.push_back(-1);
        return v;
    }
};