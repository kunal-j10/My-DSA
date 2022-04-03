class Solution{
  public:
    Node* deleteNode(Node* root, int k)
    {
        if(root!=NULL)
        {
            root->left= deleteNode(root->left,k);
            root->right=deleteNode(root->right,k);
            if(root->data>=k)
            {
                return root->left;
            }
            return root;
        }
        return root;
    }
};