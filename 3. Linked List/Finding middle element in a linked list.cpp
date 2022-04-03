class Solution{
    public:
    int getMiddle(Node *head)
    {
        struct Node *p,*q;
        p=head;
        q=head;
        
        while(q->next!=NULL)
        {
            p=p->next;
            q=q->next;
            
            if(q->next!=NULL)
            {
                q=q->next;
            }
        }
        return p->data;
    }
};