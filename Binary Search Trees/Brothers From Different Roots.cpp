class Solution
{
public:
    void helper(Node* root,unordered_map<int,int> &mp)
    {
        if(root)
        {
            helper(root->left,mp);
            mp[root->data]++;
            helper(root->right,mp);
        }
    }
    void solve(Node* root,int x,unordered_map<int,int> &mp,int &count)
    {
        if(root)
        {
            solve(root->left,x,mp,count);
            if(mp[x - root->data]>0)
                count++;
            solve(root->right,x,mp,count);
        }
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_map<int,int> mp;
        helper(root1,mp);
        int count=0;
        solve(root2,x,mp,count);
        return count;
        
    }
};