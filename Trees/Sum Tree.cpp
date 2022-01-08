class Solution
{
    public:
    int childValue(Node* root)
    {
        if(root==NULL)
            return 0;
        else if(!root->left && !root->right)
            return root->data;
        else{
            int x = childValue(root->left);
            int y = childValue(root->right);
            if(x==-1 || y==-1)
                return -1;
            if(root->data!=x+y)
                return -1;
            return root->data+x+y;
        }
    }
    bool isSumTree(Node* root)
    {
         if(childValue(root)==-1)
            return 0;
        return 1;
    }
};