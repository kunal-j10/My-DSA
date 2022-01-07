class Solution {
public:
    void LeftBoundary(Node *root,vector<int> &v)
    {
        if( !root->left && !root->right)
            return;
        else{
            v.push_back(root->data);
            if(root->left)
                LeftBoundary(root->left,v);
            else if(root->right)
                LeftBoundary(root->right,v);
        }
    }
    
    void RightBoundary(Node *root,vector<int> &v)
    {
        if( !root->left && !root->right)
            return;
        else{
            v.push_back(root->data);
            if(root->right)
                RightBoundary(root->right,v);
            else if(root->left)
                RightBoundary(root->left,v);
        }
    }
    void LeafNodes(Node* root,vector<int> &v)
    {
        if(root)
        {
            LeafNodes(root->left,v);
            LeafNodes(root->right,v);
            if(!root->left && !root->right)
                v.push_back(root->data);
        }
        return;
    }
    
    vector <int> boundary(Node *root)
    {
        vector<int> v,v2;
        v.push_back(root->data);
        
        if(root->left)
            LeftBoundary(root->left,v);
            
        LeafNodes(root,v);
        
        if(root->right)
            RightBoundary(root->right,v2);
            
        reverse(v2.begin(),v2.end());
        v.insert(v.end(),v2.begin(),v2.end());
        
        return v;
    }
};