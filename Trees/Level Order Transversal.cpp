class Solution
{
    public:
    vector<int> levelOrder(Node* node)
    {
      queue <struct Node*> q;
      struct Node* ptr;
      ptr=node;
      q.push(ptr);
      vector <int> v;
      while(!q.empty())
      {
          ptr=q.front();
          q.pop();
          v.push_back(ptr->data);
          if(ptr->left)
            q.push(ptr->left);
        if(ptr->right)
            q.push(ptr->right);
      }
      return v;
    }
};