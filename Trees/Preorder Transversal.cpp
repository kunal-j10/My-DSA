//Function to return a list containing the preorder traversal of the tree.
void PREORDER(Node* root,vector <int>&v)
{
    if(root == NULL)
        return;
    v.push_back(root->data);
    PREORDER(root->left,v);
    PREORDER(root->right,v);
    
}

vector <int> preorder(Node* root)
{
  vector <int> v;
  PREORDER(root,v);
  return v;
}