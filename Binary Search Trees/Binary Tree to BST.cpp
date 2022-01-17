class Solution{
  public:
  
  //this helps to store the values of Tree
    void solve(Node* root,vector<int> &v)
    {
        if(root)
        {
            v.push_back(root->data);
            solve(root->left,v);
            solve(root->right,v);
        }
    }
    
    // Inorder transversal of BT and changing value
    void change(Node* root,vector<int> v,int &i)
    {
        if(root)
        {
            change(root->left,v,i);
            root->data=v[i++];
            change(root->right,v,i);
        }
    }
    Node *binaryTreeToBST (Node *root)
    {
        vector<int> v;
        solve(root,v);
        sort(v.begin(),v.end());
        int i=0;
        change(root,v,i);
        return root;
    }
};