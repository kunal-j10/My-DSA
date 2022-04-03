class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* head = new TreeNode(preorder[0]);
        TreeNode* p =head;
        stack<TreeNode*>st;
        int i=1;
        while(i<preorder.size())
        {
            if(preorder[i]<p->val)
            {
                p->left= new TreeNode(preorder[i++]);
                st.push(p);
                p=p->left;
            }
            else{
                if(st.empty() || preorder[i]<st.top()->val)
                {
                    p->right= new TreeNode(preorder[i++]);
                    p=p->right;
                }
                else{
                    p=st.top();
                    st.pop();
                }
            }
        }
        return head;
    }
};