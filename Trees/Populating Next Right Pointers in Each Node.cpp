class Solution {
public:
    Node* connect(Node* root) {
        queue<struct Node*>q;
        struct Node *ptr=root;
        
        // for corner cases
        if(!ptr)
            return ptr;
        
        q.push(ptr);
        q.push(NULL);
        while(!q.empty())
        {
            ptr=q.front();
            q.pop();
            
            if(ptr!=NULL)
            {
                ptr->next=q.front();
                if(ptr->left)
                    q.push(ptr->left);
                if(ptr->right)
                        q.push(ptr->right);
            }
            
            if(ptr==NULL && !q.empty())
                q.push(NULL);
        }
        return root;
    }
};