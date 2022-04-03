class Solution{
    public:
    vector<int> postOrder(Node* node) {
        stack<struct Node*> stk1;
        struct Node* ptr;
        vector<int> vctr;
        
        ptr=node;
        stk1.push(ptr);
        while(!stk1.empty())
        {
            ptr=stk1.top();
            stk1.pop();
            
            if(ptr->left)
                stk1.push(ptr->left);
            if(ptr->right)
                stk1.push(ptr->right);
            
            vctr.push_back(ptr->data);
        }
        reverse(vctr.begin(),vctr.end());
        
        return vctr;
    }
};