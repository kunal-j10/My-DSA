bool search(struct Node* root, int x) {
    if(root==NULL)
        return 0;
    
    if(root->data==x)
        return 1;
    else if(root->data>x)
        return search(root->left,x);
    else if(root->data<x)
        return search(root->right,x);
}