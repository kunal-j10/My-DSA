// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
    public:
    void Help(Node *root,int &k,int &ans)
    {
        if(root)
        {
            Help(root->right,k,ans);
            if(k==1)
                ans=root->data;
            k--;
            Help(root->left,k,ans);
        }
        return;
    }
    int kthLargest(Node *root, int K)
    {
        int ans =0;
        Help(root,K,ans);
        return ans;
    }
};