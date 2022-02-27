class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        int i=0;
        int n= encoded.size();
        vector<int> ans;
        ans.push_back(first);
        while(i<n)
        {
            first=encoded[i]^first;
            ans.push_back(first);
            i++;
        }
        return ans;
    }
};