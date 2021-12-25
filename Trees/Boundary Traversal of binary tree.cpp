class Solution {
public:
    void LeftBoundary(Node *root,vector <int> &v)
    {
        struct Node* ptr;
        ptr=root;
        while(ptr)
        {
            if(ptr->left)
            {
                v.push_back(ptr->data);
                ptr=ptr->left;
            }
            else if(ptr->right)
            {
                v.push_back(ptr->data);
                ptr=ptr->right;
            }
            else
                break;
        }
        return;
    }
    
    int LeafNodes(struct Node* root,vector<int> &v)
    {
        if(root==NULL)
            return 0;
        else{
            int x= LeafNodes(root->left,v);
            int y= LeafNodes(root->right,v);
            
            if(x==0 && y==0)
                v.push_back(root->data);
            return 1;
        }
    }
    
    void RightBoundary(Node *root,vector <int> &v)
    {
        struct Node* ptr=root;
        while(ptr)
        {
            if(ptr->right)
            {
                v.push_back(ptr->data);
                ptr=ptr->right;
            }
            else if(ptr->left)
            {
                v.push_back(ptr->data);
                ptr=ptr->left;
            }
            else
                break;
        }
        return;
    }
    
    vector <int> boundary(Node *root)
    {
        vector <int> v1,v2,v3;
        v1.push_back(root->data);
        if(root->left)
            LeftBoundary(root->left,v1);
            
        LeafNodes(root,v2);
        
        if(root->right)
            RightBoundary(root->right,v3);
            
        v1.insert(v1.end(),v2.begin(),v2.end());
        
        reverse(v3.begin(),v3.end());
        v1.insert(v1.end(),v3.begin(),v3.end());
        
        return v1;
    }
};