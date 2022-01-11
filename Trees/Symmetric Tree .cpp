class Solution{
    public:
    bool Transverse(Node* r1,Node *r2)
    {
        if(!r1 && !r2)
            return 1;
        if(!r1 || !r2)
            return 0;
        if(r1->data != r2->data)
            return 0;
        else{
            bool x = Transverse(r1->left,r2->right);
            bool y = Transverse(r1->right,r2->left);
            
            if(x==0 || y==0)
                return 0;
            return 1;
        }
    }
    bool isSymmetric(struct Node* root)
    {
	    if(root==NULL)
	        return 1;
	    return Transverse(root->left,root->right);
    }
};