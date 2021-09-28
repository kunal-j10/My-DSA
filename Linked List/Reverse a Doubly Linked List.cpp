struct Node* reverseDLL(struct Node * head)
{
    struct Node *p=head;
    int temp;
    while(p!=NULL)
    {
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        
        if(p->prev==NULL)
        {
            head=p;
        }
        p=p->prev;
        
    }
    return head;
}