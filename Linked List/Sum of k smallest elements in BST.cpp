void Help(Node*root,int &k,int &ans)
{
    if(root)
    {
        Help(root->left,k,ans);
        if(k>=1)
            ans=ans+root->data;
        k--;
        Help(root->right,k,ans);
    }
    return;
}
int sum(Node* root, int k) 
{ 
    int ans =0;
    Help(root,k,ans);
    if(k>=1)
        return -1;
    return ans;
}