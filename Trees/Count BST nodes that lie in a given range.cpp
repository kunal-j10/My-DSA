int getCount(Node *root, int l, int h)
{
  int x,y;
  if(root!= NULL)
  {
      int x= getCount(root->left,l,h);
      int y= getCount(root->right,l,h);
      if(root->data >=l && root->data <= h)
            return x+y+1;
      
      return x+y;
  }
  return 0;
}