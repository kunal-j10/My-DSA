class Solution
{
    public:
    bool hasPathSum(Node *root, int S) {
        if(root==NULL)
            return 0;
        else if(!root->left && !root->right && root->data==S)
            return 1;
        else{
            S=S-root->data;
            bool p= hasPathSum(root->left,S);
            bool q=hasPathSum(root->right,S);
            
            if(p==1||q==1)
                return 1;
            return 0;
    }
}
};