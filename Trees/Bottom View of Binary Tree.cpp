class Solution {
  public:
    vector <int> bottomView(Node *root) {
        queue<pair<struct Node*,int>> q;
        map<int,int> mp;
        struct Node *ptr =root;
        q.push({ptr,0});
        
        while(!q.empty())
        {
            auto p =q.front();
            q.pop();
            ptr=p.first;
            int x= p.second;
            
            mp[x]=ptr->data;
            if(ptr->left)
                q.push({ptr->left,x-1});
                
            if(ptr->right)
                q.push({ptr->right,x+1});
                
        }
        vector<int> ans;
        for(auto q: mp)
        {
            ans.push_back(q.second);
        }
        return ans;
    }
};