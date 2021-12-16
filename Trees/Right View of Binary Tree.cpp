// Should return  right view of tree
class Solution
{
    public:
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       struct Node *ptr;
       ptr=root;
       queue<struct Node*>q;
       vector<int> v;
       q.push(ptr);
       q.push(NULL);
       
       while(!q.empty())
       {
           ptr=q.front();
           q.pop();
           if(ptr!=NULL)
           {
               if(ptr->left)
                q.push(ptr->left);
               if(ptr->right)
                q.push(ptr->right);
                
                if(q.front()==NULL)
                    v.push_back(ptr->data);
           }
           if(ptr==NULL && !q.empty())
           {
               q.push(NULL);
           }
       }
       return v;
    }
};