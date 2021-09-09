class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL || head->next == NULL )
        {
            return 0;
        }
        
        struct ListNode *p, *q;
        p=head;
        q=head;
        
        do{
            p=p->next;
            q=q->next;
            
            if(q != NULL)
            {
                q=q->next;
            }
        }
        while(q && p && q!=p);
        
        if(q==p)
        {
            return 1;
        }
        return 0;
    }
};