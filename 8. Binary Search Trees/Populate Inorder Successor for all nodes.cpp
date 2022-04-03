class Solution
{
public:
    void Helper(Node *root,Node* &prev)
    {
        if(root)
        {
            Helper(root->left,prev);
            if(prev!=NULL)
                prev->next=root;
            prev = root;
            Helper(root->right,prev);
        }
        return;
    }
    void populateNext(Node *root)
    {
        Node* prev = NULL;
        Helper(root,prev);
    }

};
