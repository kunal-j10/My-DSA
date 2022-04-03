struct Node* reverseList(struct Node *head)
    {
        struct Node *p,*q,*r;
        p=head;
        q=NULL,r=NULL;
        
        while(p!=NULL)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        return q;
    }