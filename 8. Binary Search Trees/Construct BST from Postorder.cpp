Node *constructTree (int arr[], int n)
{
    Node* root=new Node(arr[n-1]);
    Node* p=root;
    int i=n-2;
    stack<Node*> st;
    while(i>=0)
    {
        if(arr[i]<p->data)
        {
            if(st.empty() || st.top()->data < arr[i])
            {
                //left Node
                p->left=new Node(arr[i]);
                p=p->left;
                i--;
            }
            else{
                // go to previous root
                p=st.top();
                st.pop();
            }
        }
        else{
            //right Node
            p->right=new Node(arr[i]);
            st.push(p);
            p=p->right;
            i--;
        }
    }
    return root;
}