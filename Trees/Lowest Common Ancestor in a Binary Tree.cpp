class Solution
{
    public:
    
    Node* lca(Node* root ,int n1 ,int n2 )
    {
        if(!root)
            return NULL;
        else{
            if(root->data==n1 || root->data==n2)
                return root;
            
            auto p = lca(root->left,n1,n2);
            auto q = lca(root->right,n1,n2);
            
            if(p && q)
                return root;
            if(p)
                return p;
            return q;
        }
    }
};