class Solution
{
    public: 
    void solve(Node *root,Node *&head,Node *&prev,int &flag)
    {
        if(root==NULL)
            return;
        else{
            solve(root->left,head,prev,flag);
            
            if(flag==0)
            {
                flag=1;
                head=root;
                prev=root;
            }
            else{
                prev->right=root;
                root->left=prev;
                prev=root;
            }
            
            solve(root->right,head,prev,flag);
        }
    }
    Node * bToDLL(Node *root)
    {
        struct Node *prev,*head;
        prev=head=NULL;
        int flag = 0;
        solve(root,head,prev,flag);
        return head;
    }
};