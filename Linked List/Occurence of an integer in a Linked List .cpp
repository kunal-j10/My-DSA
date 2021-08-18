class Solution
{
    public:
    int count(struct node* head, int search_for)
    {
      struct node *p;
      p=head;
      int count =0;
      while(p!=NULL)
      {
          if(p->data == search_for)
              count++;
          p=p->next;
      }
      return count;
    }
};