int compare(Node *list1, Node *list2) 
{
   struct Node *p,*q;
   p= list1;
   q=list2;
   
   while(p!=NULL && q!=NULL)
   {
       if(p->c > q->c)
       {
           return 1;
       }
       if(p->c < q->c)
       {
           return -1;
       }
       p=p->next;
       q=q->next;
   }
   if(p==NULL && q==NULL)
   {
       return 0;
   }
   if(p!=NULL)
   {
       return -1;
   }
   return 1;
}