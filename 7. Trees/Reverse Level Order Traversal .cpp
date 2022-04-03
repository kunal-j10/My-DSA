vector<int> reverseLevelOrder(Node *root)
{
      vector<int> v;
      queue <struct Node*>q;
      struct Node* ptr;
      ptr=root;
      q.push(ptr);
      while(!q.empty())
      {
          ptr=q.front();
          q.pop();
          v.push_back(ptr->data);
          if(ptr->right)
            q.push(ptr->right);
          if(ptr->left)
            q.push(ptr->left);
      }
      reverse(v.begin(),v.end());
      return v;
}