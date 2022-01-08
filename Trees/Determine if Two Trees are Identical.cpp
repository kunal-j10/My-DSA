class Solution
{
    public:
    bool isIdentical(Node *r1, Node *r2)
    {
        if(!r1 && !r2)
            return 1;
        else if(r1 && r2)
        {
            bool x = isIdentical(r1->left,r2->left);
            bool y = isIdentical(r1->right,r2->right);
            if(x==0 || y==0)
                return 0;
            if(r1->data!=r2->data)
                return 0;
            return 1;
        }
        else
            return 0;
    }
};