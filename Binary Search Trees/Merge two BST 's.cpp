class Solution
{
    public:
    void help(Node* root,vector<int> &v)
    {
        if(root)
        {
            help(root->left,v);
            v.push_back(root->data);
            help(root->right,v);
        }
        return;
    }
    vector<int> merge(Node *root1, Node *root2)
    {
       vector<int> v;
       help(root1,v);
       help(root2,v);
       sort(v.begin(),v.end());
       return v;
    }
};