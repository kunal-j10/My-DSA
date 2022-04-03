int count(Node* root)
{
    if(root)
    {
        return count(root->left)+count(root->right)+1;
    }
    return 0;
}
void helper(Node* root,float &ans,int &x,int &y)
{
    if(root)
    {
        helper(root->left,ans,x,y);
        x--;
        y--;
        if(x==0)
            ans+=root->data;
        if(y==0)
            ans+=root->data;
        helper(root->right,ans,x,y);
    }
}
float findMedian(struct Node *root)
{
      int n=count(root);
      int x=0,y=0;
      if(n%2!=0)
         x=y=(n/2)+1;
      else
      {
         x=n/2;
         y=(n/2)+1;
      }
      float ans=0;
      helper(root,ans,x,y);
      return ans/2;
}