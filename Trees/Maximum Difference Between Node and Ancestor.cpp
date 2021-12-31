class Solution {
public:
    void Travel(TreeNode* root, int maxAnsistor, int minAnsistor,int &V)
    {
        if(root!=NULL)
        {
            int x = abs(maxAnsistor - root->val);
            int y= abs(minAnsistor - root->val);
            if(x>=V)
                V=x;
            if(y>=V)
                V=y;
            maxAnsistor=max(maxAnsistor,root->val);
            minAnsistor=min(minAnsistor,root->val);
            
            Travel(root->left,maxAnsistor,minAnsistor,V);
            Travel(root->right,maxAnsistor,minAnsistor,V);
        }
        return;
    }
    int maxAncestorDiff(TreeNode* root) {
        int maxAnsistor=root->val,minAnsistor=root->val,V=0;
        Travel(root,maxAnsistor,minAnsistor,V);
        return V;
    }
};