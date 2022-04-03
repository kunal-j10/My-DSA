class Solution
{
    public:
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        stack<long long> st;
        vector<long long> v;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && st.top()<arr[i])
            {
                st.pop();
            }
            if(!st.empty())
                v.push_back(st.top());
            else 
                v.push_back(-1);
            
            st.push(arr[i]);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};