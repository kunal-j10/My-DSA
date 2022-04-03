class Solution{
    public:
    vector<int> preOrder(Node* root)
    {
        vector <int> v;
        stack <struct Node*> st;
        struct Node* ptr;
        ptr = root;
        while(ptr!=NULL || !(st.empty()))
        {
            if(ptr==NULL)
            {
                ptr = st.top();
                st.pop();
                ptr=ptr->right;
            }
            else{
                v.push_back(ptr->data);
                st.push(ptr);
                ptr = ptr->left;
            }
            
        }
        return v;
        
    }
};