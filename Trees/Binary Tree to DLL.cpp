class Solution
{
    public: 
    void INORDER(struct Node* root,vector<int> &v)
    {
        if(root==NULL)
            return;
        else{
            INORDER(root->left,v);
            v.push_back(root->data);
            INORDER(root->right,v);
        }
    }
    Node * bToDLL(Node *root)
    {
        vector <int> v;
        INORDER(root,v);
        struct Node *head,*ptr,*curr;
        head=newNode(v[0]);
        curr=head;
        for(int i=1;i<v.size();i++)
        {
            ptr= newNode(v[i]);
            curr->right=ptr;
            ptr->left=curr;
            curr=ptr;
            
        }
        curr->right = NULL;
        return head;
    }
};