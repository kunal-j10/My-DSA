

// Construct a binary tree of size N using two given arrays pre[] 
// and preLN[]. Array pre[] represents preorder traversal of a binary tree. 
// Array preLN[] has only two possible values L and N. The value L in 
// preLN[] indicates that the corresponding node in Binary Tree is a leaf 
// node and value N indicates that the corresponding node is a non-leaf node.

Node* solve(Node* root,int &i,int n,int pre[],char preLN[])
{
    if(preLN[i]=='L')
    {
        return new Node(pre[i++]);
    }
    else{
        root = new Node(pre[i]);
        i++;
        root->left = solve(root->left,i,n,pre,preLN);
        root->right = solve(root->right,i,n,pre,preLN);
        return root;
    }
}
struct Node *constructTree(int n, int pre[], char preLN[])
{
    int i=0;
    Node* root = solve(NULL,i,n,pre,preLN);
    return root;
}