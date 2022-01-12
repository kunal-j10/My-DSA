class Solution
{
public:
    int findMax(Node *root)
    {
        Node *p;
        while(root!=NULL)
        {
            p=root;
            root=root->right;
        }
        return p->data;
    }
    int findMin(Node *root)
    {
        Node *p;
        while(root!=NULL)
        {
            p=root;
            root=root->left;
        }
        return p->data;
    }
};