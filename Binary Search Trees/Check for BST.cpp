void travel(Node* root,vector<int> &v)
    {
        if(root)
        {
            travel(root->left,v);
            v.push_back(root->data);
            travel(root->right,v);
        }
        return;
    }
    bool isBST(Node* root) 
    {
        vector<int> v,temp;
        travel(root,v);
        temp=v;
        sort(temp.begin(),temp.end());
        
        return temp==v;
    }