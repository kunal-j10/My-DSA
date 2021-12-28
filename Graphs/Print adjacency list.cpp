class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<int> adj[]) {
        vector<vector<int>> copyadj;
        for(int i=0;i<V;i++)
        {
            vector<int> curr;
            curr.push_back(i);
            for(auto it : adj[i])
            {
                 curr.push_back(it);
            }
            copyadj.push_back(curr);
        }
        return copyadj;
    }
};