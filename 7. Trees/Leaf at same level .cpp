class Solution{
  public:
    int Transverse(Node* root,int level,int height)
    {
        if(root)
        {
            int x=Transverse(root->left,level+1,height);
            int y=Transverse(root->right,level+1,height);
            if(x==-1 || y==-1)
                return -1;
            if(!root->left && !root->right)
            {
                if(level!=height)
                    return-1;
            }
            return 0;
        }
        return 0;
    }
    
    // finding height of binary tree
    int height(Node* root)
    {
        if(root)
            return max(height(root->left),height(root->right)) +1;
        return 0;
    }
    
    bool check(Node *root)
    {
        int h= height(root);
        if(Transverse(root,1,h)==-1)
            return 0;
        return 1;
    }
};