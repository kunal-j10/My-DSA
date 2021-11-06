bool isFullTree (struct Node* root)
{
    bool x,y;
    if(root!=NULL)
    {
        x = isFullTree(root->left);
        y = isFullTree(root->right);
        if(x== false || y== false)
            return false;
        if((root->left && root->right) || (!root->left && !root->right))
            return true;
        return false;
    }
    return true;
}