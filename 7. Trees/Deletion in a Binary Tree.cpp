struct Node* deletionBT(struct Node* root, int key)
{
    queue<Node*>q;
    q.push(root);
    Node*temp;
    Node*del,*last,*lastchild;
    while(!q.empty())
    {
        int n=q.size();
        for(int i=0;i<n;i++)
        {
            temp = q.front();
            q.pop();
            
            if(temp->data == key)
            del = temp;
            
            if(temp->left)
            {
                last = temp;
                q.push(temp->left);
            }
            if(temp->right)
            {
                last = temp;
                q.push(temp->right);
            }
        }
    }
    del->data = temp->data;
    last->right==temp?last->right=NULL:last->left=NULL;
    return root;
}