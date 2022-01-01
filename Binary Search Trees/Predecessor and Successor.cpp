void precedator(Node* root, Node*& pre)
{
    
    while(root!=NULL)
    {
        pre=root;
        root=root->right;
    }
}
void successor(Node* root, Node*& suc)
{
    
    while(root!=NULL)
    {
        suc=root;
        root=root->left;
    }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    Node* p=root;
    while(p!=NULL && p->key!=key)
    {
        if(p->key <=key)
        {
            pre=p;
            p=p->right;
        }
        else{
            suc=p;
            p=p->left;
        }
    }
    if(p==NULL)
        return;
    if(p->left)
        precedator(p->left,pre);
    if(p->right)
        successor(p->right,suc);
    return;
}