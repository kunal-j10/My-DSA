int countLeaves(Node* root)
{
  int x,y;
  
  if(root!= NULL)
  {
      x= countLeaves(root->left);
      y= countLeaves(root->right);
      if(root->left == NULL && root->right == NULL)
          return x+y+1;
      
      return x+y;
  }
  return 0;
}