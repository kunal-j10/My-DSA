int height(struct Node* node)
{
    int x,y;
    if(node != NULL)
    {
        x= height(node->left);
        y= height(node->right);
        
        if(x>=y)
            return x+1;
        return y+1;
    }
    return 0;
}