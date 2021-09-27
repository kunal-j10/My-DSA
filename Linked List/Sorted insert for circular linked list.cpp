struct Node *sortedInsert(struct Node *head, int data)
{
    //code here
    struct Node *p,*q,*r;
    p= (struct Node *)malloc(sizeof(struct Node));
    p->data = data;
    q= head;
    int flag =0;
    if(q->data > data)
    {
        p->next =head;
        while(q->next != head)
        {
            q=q->next;
        }
        q->next = p;
        return p;
    }
    do{
        if((q->next)->data>data && flag==0)
        {
            p->next = q->next;
            q->next = p;
            flag=1;
        }
        q=q->next;
    }
    while(q!=head);
    return head;
}