class Solution
{
    public:
	void helper(Node* root,int K,int &mini)
	{
	    if(root)
	    {
	        mini=min(mini,abs(root->data - K));
	        
	        if(root->data==K)
	            return;
	        else if(root->data>K)
	            helper(root->left,K,mini);
	        else
	            helper(root->right,K,mini);
	    }
	}
    int minDiff(Node *root, int K)
    {
        int mini=INT_MAX;
        helper(root,K,mini);
        return mini;
    }
};