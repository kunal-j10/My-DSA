Node* findIntersection(Node* head1, Node* head2)
{
    
    struct Node *p,*q,*head,*curr;
    p=head1,q=head2;
    head=NULL,curr=NULL;
    while(p!=NULL && q!=NULL)
    {
        if(p->data==q->data)
        {
            if(head==NULL)
            {
                struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
                ptr->data= p->data;
                ptr->next=NULL;
                head=ptr;
                curr=ptr;
            }
            else{
                struct Node *ptr= (struct Node*)malloc(sizeof(struct Node));
                ptr->data= p->data;
                ptr->next=NULL;
                curr->next=ptr;
                curr=ptr;
            }
            p=p->next;
            q=q->next;
        }
        if(q && p && p->data>q->data)
        {
            q=q->next;
        }
        if(p && q && p->data<q->data)
        {
            p=p->next;
        }
        
    }
    return head;
}