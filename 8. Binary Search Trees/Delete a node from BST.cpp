Node *successor(struct Node* root)
{
    struct Node* q=NULL;
    while(root)
    {
        q=root;
        root=root->left;
    }
    return q;
}
Node *deleteNode(Node *root, int X) {
    if(!root)
        return root;
        
    if(X<root->data)
        root->left=deleteNode(root->left,X);
    else if(X>root->data)
        root->right=deleteNode(root->right,X);
    else{
        if(!root->left)
            return root->right;
        else if(!root->right)
            return root->left;
            
        struct Node* temp; 
        temp = successor(root->right);
        swap(root->data,temp->data);
        root->right=deleteNode(root->right,X);
            
    }
    return root;
}