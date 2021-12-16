vector<int> leftView(Node *root)
{
   struct Node* ptr;
   ptr=root;
   queue<struct Node*> q;
   vector<int> v;
   
   if(root==NULL)
        return v;
   
   q.push(ptr);
   q.push(NULL);
   v.push_back(ptr->data);
   while(ptr!=NULL || !q.empty())
   {
       ptr=q.front();
       q.pop();
       
       if(ptr!=NULL)
       {
           if(ptr->left)
            q.push(ptr->left);
           if(ptr->right)
            q.push(ptr->right);
       }
       else if(ptr==NULL && !q.empty())
       {
           q.push(NULL);
           v.push_back(q.front()->data);
       }
   }
   return v;
}