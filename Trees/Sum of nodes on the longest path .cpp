class Solution
{
public:

    // this return int in pair where,
    // first represents height and second represents sum
    pair<int,int> Helper(Node *root)
    {
        if(root)
        {
            auto p= Helper(root->left);
            auto q= Helper(root->right);
            if(p.first>q.first)
                return {p.first+1,p.second+root->data};
            else if(q.first>p.first)
                return {q.first+1,q.second+root->data};
            else if(p.first==q.first)
            {
                if(p.second>=q.second)
                    return {p.first+1,p.second+root->data};
                else
                    return {q.first+1,q.second+root->data};
            }
        }
        return {0,0};
    }
    
    int sumOfLongRootToLeafPath(Node *root)
    {
        auto x = Helper(root);
        return x.second;
    }
};