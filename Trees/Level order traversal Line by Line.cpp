vector<vector<int>> levelOrder(Node* node)
{
  vector<vector<int>> ans;
  struct Node* ptr;
  ptr=node;
  queue <struct Node*> q;
  q.push(ptr);
  
  while(!q.empty())
  {
      vector<int> levelAns;   //considering one level
      int size= q.size();     //no. of elements in that level
      for(int i=0;i<size;i++) //transversing in that level
      {
          ptr=q.front();
          q.pop();
          levelAns.push_back(ptr->data); 
          
          if(ptr->left)
            q.push(ptr->left);
          if(ptr->right)
            q.push(ptr->right);
          
      }
      ans.push_back(levelAns);
  }
  return ans;
}