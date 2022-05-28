Node *flatten(Node *root)
{
   vector<int>v;
   Node*p,*q,*head;
   p=root;
   while(p!=NULL)
   {
       v.push_back(p->data);
       q=p->bottom;
       while(q)
       {
           v.push_back(q->data);
           q=q->bottom;
       }
       p=p->next;
   }
   sort(v.begin(),v.end());
   head= new Node(v[0]);
   q=head;
   for(int i=1;i<v.size();i++)
   {
       q->bottom=new Node(v[i]);
       q=q->bottom;
   }
   return head;
}