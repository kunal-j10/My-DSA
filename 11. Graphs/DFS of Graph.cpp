class Solution {
  public:
    void dfsTransversal(int i,vector<int> &vis,vector<int> adj[],vector<int> &DFS)
    {
        vis[i]=1;
        DFS.push_back(i);
        for(auto it : adj[i])
        {
            if(!vis[it])
            {
                dfsTransversal(it,vis,adj,DFS);
            }
        }
    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> vis(V,0);
        vector<int> DFS;
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
                dfsTransversal(i,vis,adj,DFS);
        }
        return DFS;
    }
};