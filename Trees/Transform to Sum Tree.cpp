class Solution {
  public:
    int Transverse(Node *&root)
    {
        if(root==NULL)
            return 0;
        else{
            int p =  Transverse(root->left);
            int q =  Transverse(root->right);
            
            int temp=root->data;
            root->data= p+q;
            return temp+p+q;
        }
    }
    
    void toSumTree(Node *node)
    {
        Transverse(node);
    }
};