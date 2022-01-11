class Solution {
  public:
    
    void Help(Node *root,int &k, int &ans)
    {
        if(root)
        {
            Help(root->left,k,ans);
            if(k==1)
                ans=root->data;
            k--;
            Help(root->right,k,ans);
        }
        return;
    }
    
    int KthSmallestElement(Node *root, int K) {
        int ans =-1;
        Help(root,K,ans);
        return ans;
    }
};