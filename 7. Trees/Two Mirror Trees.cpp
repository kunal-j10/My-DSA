class Solution
{
    
    // If two trees are minor then 
    // Inorder of one is reverse Inorder 
    // of another
    
    public:
    
    void Inorder(Node* root,vector<int>& v){
    if(root!=NULL)
    {
        Inorder(root->left,v);
        v.push_back(root->data);
        Inorder(root->right,v);
        return;
    }
    else
        return;
    }
    
    int areMirror(Node* a, Node* b) {
    vector <int> v1, v2;
    Inorder(a,v1);
    Inorder(b,v2);
    
    reverse(v1.begin(),v1.end());
    
    if(v1==v2)
        return 1;
    else
        return 0;
    }

};