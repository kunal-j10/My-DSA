class Solution
{
    public:
    void help(Node* root,int &k, int &ans)
    {
        if(root)
        {
            help(root->right,k,ans);
            k--;
            if(k==0)
                ans=root->data;
            help(root->left,k,ans);
        }
    }
    int kthLargest(Node *root, int K)
    {
       int ans=0;
       help(root,K,ans);
       return ans;
    }