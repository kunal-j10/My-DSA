class Solution {
    int max =0;
  public:
    int height(struct Node* root)
    {
        if(!root)
        {
            return 0;
        }
        else{
            int x= height(root->left);
            int y= height(root->right);
            
            if((x+y+1)>max)
                max = x+y+1;
                
            if(x>=y)
                return x+1;
            else
                return y+1;
        }
    }
    // Function to return the diameter of a Binary Tree.
    int diameter(Node* root) {
        height(root);
        return max;
    }
};