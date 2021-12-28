class Solution
{
    public:
    void solve(Node *root,Node *&head,Node *&prev,int &flag,stack<struct Node*> &st)
    {
        if(root==NULL)
            return;
        else{
            if(flag==0)
            {
                if(root->right)
                {
                    st.push(root->right);
                    root->right=NULL;
                }
                flag=1;
                head=root;
                prev=root;
            }
            else{
                if(root->right)
                {
                    st.push(root->right);
                    root->right=NULL;
                }
                prev->right=root;
                prev->left=NULL;
                prev=root;
            }
            
            solve(root->left,head,prev,flag,st);
            
            if(!st.empty())
            {
                struct Node *temp = st.top();
                st.pop();
               solve(temp,head,prev,flag,st);
            }
            
        }
    }
    void flatten(Node *root)
    {
        struct Node *head,*prev;
        head=prev=NULL;
        int flag =0;
        stack <struct Node*> st;
        solve(root,head,prev,flag,st);
        root=head;
    }
};