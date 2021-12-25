class Solution{
    public:
    int height(struct Node* root)
    {
        if(root==NULL)
            return 0;
        else{
            int x = height(root->left);
            int y = height(root->right);
            if(x==-1 || y==-1)
            {
                return -1;
            }
            if(abs(x-y)>1)
                return -1;
            
            if(x>=y)
                return x+1;
            else
                return y+1;
        }
    }
    bool isBalanced(Node *root)
    {
        int x = height(root);
        if(x==-1)
            return 0;
        return 1;
    }
};