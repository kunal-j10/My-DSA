int getNthFromLast(struct Node *head, int n)
{
    struct Node *p,*q;
    p=head;
    q=NULL;
    int count=0;
    int k=n;
    while(p->next!=NULL)
    {
        if(k==1)
        {
            count++;
            if(q==NULL)
            {
                q=head;
            }
            q=q->next;
            p=p->next; 
        }
        else
        {
            count++;
            k--;
            p=p->next;
        }
    }
    count++;
    if(count ==n)
    {
        return head->data;
    }
    if(n>count)
    {
       return -1;
    }
    return q->data;
}