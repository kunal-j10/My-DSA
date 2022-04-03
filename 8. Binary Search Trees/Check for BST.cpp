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




// method 2:  without using extra space for vectors

class Solution
{
    public:
    void InorderTransversal(Node* root, int &prev,bool &ans)
    {
        if(root)
        {
            InorderTransversal(root->left,prev,ans);
            if(prev >= root->data)
                ans=0;
            prev=root->data;
            InorderTransversal(root->right,prev,ans);
        }
    }
    bool isBST(Node* root) 
    {
        bool ans =1;
        int prev= INT_MIN;
        InorderTransversal(root,prev,ans);
        return ans;
    }
};