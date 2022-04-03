class Solution {
public:
    void Transverse(TreeNode* root,string &str)
    {
        if(root!=NULL)
        {
            str= str + to_string(root->val);
            
            // if leaf node then return
            if(!root->left && !root->right)
                return;
            
            //left transverse
            str+= "(";
            Transverse(root->left,str);
            str+= ")";
            
            //right transverse
            if(root->right)
            {
                str+= "(";
                Transverse(root->right,str);
                str+= ")";
            }
            
            
        }
        return;
    }
    string tree2str(TreeNode* root) {
        string str="";
        Transverse(root,str);
        return str;
    }
};