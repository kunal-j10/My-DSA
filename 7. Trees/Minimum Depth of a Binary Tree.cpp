class Solution{
  public:
    int minDepth(Node *root) {
        int x,y;
        if(root!=NULL)
        {
            x= minDepth(root->left);
            y= minDepth(root->right);
            
            if(root->left==NULL)
                return y+1;
            else if(root->right==NULL)
                return x+1;
            else{
                if(x>=y)
                    return y+1;
                
                return x+1;
            }
            
        }
        return 0;
    }
};