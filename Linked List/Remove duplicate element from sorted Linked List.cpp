Node *removeDuplicates(Node *head)
{
    struct Node *p=head;
    while(p!=NULL)
    {
        if(p->next && p->data==p->next->data)
            p->next=p->next->next;
        else
            p=p->next;
    }
    return head;
}