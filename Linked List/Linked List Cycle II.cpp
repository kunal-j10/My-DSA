class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL)
        {
            return NULL;
        }
        struct ListNode *p,*q,*r;
        p=head;
        q=head;
        r=head;
        while(q->next && q->next->next)
        {
            p=p->next;
            q=q->next->next;
            if(p==q)
            {
                while(r!=p)
                {
                    r=r->next;
                    p=p->next;
                }
                return r;
            }
        }
        return NULL;
    }
};