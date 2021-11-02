class Solution {
  public:
    // Function to return a list containing the inorder traversal of the tree.
    void INORDER(Node* root,vector<int> &v)
    {
        if(root==NULL)
            return;
        INORDER(root->left,v);
        v.push_back(root->data);
        INORDER(root->right,v);
    }
    vector<int> inOrder(Node* root) {
      vector <int> v;
      INORDER(root,v);
      return v;
    }
};