int transverse(Node *root,int a,vector<int> &v)
{
    if(root)
    {
        int x =transverse(root->left,a,v);
        int y= transverse(root->right,a,v);
        if(x==1||y==1)
        {
            v.push_back(root->data);
            return 1;
        }
        if(root->data==a)
            return 1;
        return 0;
    }
    return 0;
}
int kthAncestor(Node *root, int k, int node)
{
    vector<int> v;
    int m = transverse(root,node,v);
    
    if(k>v.size() || m==0)
        return -1;
    
    return v[k-1];
}