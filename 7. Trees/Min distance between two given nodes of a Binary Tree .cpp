class Solution{
    public:
    Node* LCA(Node* root,int a,int b)
    {
        if(root==NULL)
            return NULL;
        else{
            if(root->data== a || root->data==b)
                return root;
            
            auto x = LCA(root->left,a,b);
            auto y = LCA(root->right,a,b);
            
            if(x && y)
                return root;
            else if(x)
                return x;
            else
                return y;
        }
    }
    int dist(Node* root,int a)
    {
        if(root==NULL)
            return -1;
        else{
            if(root->data==a)
                return 0;
            int x = dist(root->left,a);
            int y = dist(root->right,a);
            if(x==-1 && y==-1)
                return -1;
            return max(x,y)+1;
        }
    }
    int findDist(Node* root, int a, int b) {
        
        auto lca = LCA(root,a,b);
        
        int x = dist(root,a);
        int y = dist(root,b);
        int z = dist(root,lca->data);
        
        return x + y - 2*z;
    }
};