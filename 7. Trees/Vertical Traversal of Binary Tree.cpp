class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        queue<pair<struct Node*,pair<int,int>>>q;
        map<int,map<int,vector<int>>>m;
        struct Node* ptr=root;
        q.push({ptr,{0,0}});
        while(!q.empty())
        {
            auto p = q.front();
            q.pop();
            
            ptr= p.first;
            int x= p.second.first;
            int y= p.second.second;
            
            m[x][y].push_back(ptr->data);
            
            if(ptr->left)
                q.push({ptr->left,{x-1,y+1}});
            if(ptr->right)
                q.push({ptr->right,{x+1,y+1}});
            
        }
        vector<int> ans;
        for(auto p : m)
        {
            for(auto q : p.second)
            {
                ans.insert(ans.end(),q.second.begin(),q.second.end());
            }
        }
        return ans;
    }
};
