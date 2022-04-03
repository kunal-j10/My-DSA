Node* LCA(Node *root, int n1, int n2)
{
   while(root->data>max(n1,n2) || root->data<min(n1,n2))
   {
        if(root->data>max(n1,n2))
            root=root->left;
        else if(root->data<min(n1,n2))
            root=root->right;
        
        if(root->data==n1 || root->data==n2)
            return root;
   }
   return root;
}