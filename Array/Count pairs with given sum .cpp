class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[arr[i]]++;
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(k%2==0 && arr[i]==k/2)
            {
                if(mp[arr[i]]>0)
                {
                    count+= (mp[arr[i]]*(mp[arr[i]]-1))/2;
                    mp[arr[i]]=0;
                }
                
            }
            else if(mp[k-arr[i]]>0)
            {
                count+= mp[arr[i]]*mp[k-arr[i]];
                mp[arr[i]]=0;
                mp[k-arr[i]]=0;
            }
                
        }
        return count;
    }
};