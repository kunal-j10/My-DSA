class Solution
{
    public:
    Node* rotate(Node* head, int k)
    {
        struct Node *p, *q;
        p=head;
        q=NULL;
        while(p && p->next != NULL)
        {
            if(k==1)
            {
                q=p;
                p=p->next;
                q->next = NULL;
                q=p;
                k--;
            }
            else{
                k--;
                p=p->next;
            }
        }
        if(k==1)
        {
            return head;
        }
        p->next=head;
        head=q;
        return head;
    }
};