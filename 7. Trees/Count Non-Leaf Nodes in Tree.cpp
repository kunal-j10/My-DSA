class Solution {
  public:
    int countNonLeafNodes(Node* root) {
        int x,y;
        
        if(root!=NULL)
        {
            x= countNonLeafNodes(root->left);
            y= countNonLeafNodes(root->right);
            
            if(root->left != NULL || root->right!= NULL)
                return x+y+1;
            
            return x+y;
        }
        return 0;
    }
};