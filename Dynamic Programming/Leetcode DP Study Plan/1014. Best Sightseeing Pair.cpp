class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        vector<pair<int,int>> v;
        int n=values.size();
        for(int i=0;i<n;i++)
        {
            v.push_back({values[i]+i,values[i]-i});
        }
        int nextElement=v[0].first;
        int ans=INT_MIN;
        for(int i=1;i<n;i++)
        {
            ans=max(ans,nextElement+v[i].second);
            nextElement=max(nextElement,v[i].first);
        }
        return ans;
    }
};


//optimising space
class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        //vector<pair<int,int>> v;
        int n=values.size();
        // for(int i=0;i<n;i++)
        // {
        //     v.push_back({values[i]+i,values[i]-i});
        // }
        int nextElement=values[0]-0;
        int ans=INT_MIN;
        for(int i=1;i<n;i++)
        {
            ans=max(ans,nextElement+values[i]-i);
            nextElement=max(nextElement,values[i]+i);
        }
        return ans;
    }
};