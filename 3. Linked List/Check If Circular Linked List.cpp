bool isCircular(struct Node *head){
    struct Node *p,*q;
    if( head->next==NULL)
    return 0;
    p=head;
    q=head;
    do
    {
        q=q->next;
        p=p->next;
        if(q!= NULL)
        {
            q=q->next;
        }
    }
    while(q&&p&&q!=p);
    if(p==q)
    {
        return 1;
    }
    return 0;
}