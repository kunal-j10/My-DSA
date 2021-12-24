vector<int> diagonal(Node *root)
{
   queue<struct Node*>q;
   struct Node* ptr;
   ptr=root;
   vector<int> v;
   while(!q.empty() || ptr!=NULL)
   {
       if(ptr==NULL)
       {
           ptr=q.front();
           q.pop();
       }
       if(ptr->left)
       {
           q.push(ptr->left);
       }
       v.push_back(ptr->data);
       ptr=ptr->right;
       
   }
   return v;
}