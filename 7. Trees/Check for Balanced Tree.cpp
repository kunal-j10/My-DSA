class Solution{
    public:
    int heightBalanced(Node* root)
    {
        if(root)
        {
            int x = heightBalanced(root->left);
            int y= heightBalanced(root->right);
            
            if(x==-1 ||y==-1|| abs(x-y)>1)   // if this then not balanced
                return -1;
            
            return max(x,y)+1;               //returns height
        }
        return 0;
    }
    bool isBalanced(Node *root)
    {
        if(heightBalanced(root)==-1)
            return false;
        return true;
    }
};