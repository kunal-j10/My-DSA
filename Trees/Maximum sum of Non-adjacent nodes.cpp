class Solution{
  public:
    pair<int,int> Helper(Node *root)
    {
        if(!root)
            return {0,0};
        else{
            auto p = Helper(root->left);
            auto q = Helper(root->right);
            
            int x = p.second + q.second + root->data;
            int y = max(p.first,p.second) + max(q.first,q.second);
            
            return {x,y};
        }
    }
    int getMaxSum(Node *root) 
    {
        auto x = Helper(root);
        return max(x.first,x.second);
    }
};