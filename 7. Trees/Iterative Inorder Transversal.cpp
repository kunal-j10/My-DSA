class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int> v;
        stack<struct Node*> st;
        struct Node* ptr;
        ptr = root;
        while(ptr!= NULL || (!st.empty()))
        {
            if(ptr==NULL)
            {
                ptr=st.top();
                st.pop();
                v.push_back(ptr->data);
                ptr=ptr->right;
                
            }
            else{
                st.push(ptr);
                ptr=ptr->left;
            }
        }
        return v;
    }
};