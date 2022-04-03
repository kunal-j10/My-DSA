// Should return  right view of tree

class Solution
{
    public:
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


//  Recursive Method


class Solution
{
    public:
    void Transverse(Node *root,int level,int &maxLevel,vector<int> &v)
    {
        if(root!=NULL)
        {
            if(level==maxLevel)
            {
                v.push_back(root->data);
                maxLevel++;
            }
            
            Transverse(root->right,level+1,maxLevel,v);
            Transverse(root->left,level+1,maxLevel,v);
        }
        return;
    }
    vector<int> rightView(Node *root)
    {
       vector<int> v;
       int maxLength=0;
       Transverse(root,0,maxLength,v);
       return v;
    }
};