void POSTORDER(Node* root,vector <int> &v)
{
    if(root==NULL)
        return;
    POSTORDER(root->left,v);
    POSTORDER(root->right,v);
    v.push_back(root->data);
    
}
vector <int> postOrder(Node* root)
{
  vector <int> v;
  POSTORDER(root,v);
  return v;
}