//function to reverse any linkedlist
struct Node* reverseLinkedList(struct Node* root)
{
    struct Node *p,*q,*r;
    p=root;
    q=p->next;
    r=NULL;
    while(p!=NULL)
    {
        p->next=r;
        r=p;
        p=q;
        
        if(q != NULL)
        {
            q=q->next;
        }
    }
    return r;
}

void reorderList(Node* head) {
    
    struct Node *mid,*midTail,*p,*q,*r,*s;
    int count = 1;
    p=mid=head;
    
    //going to mid and counting no. of nodes
    while(p->next!= NULL)
    {
        midTail=mid;
        mid=mid->next;
        p=p->next;
        count++;
        
        if(p->next!=NULL)
        {
            p=p->next;
            count++;
        }
    }
    
    if(count <=2)
        return; // as it is same as result
        
        
    // reverse half of LL from mid
    mid = reverseLinkedList(mid);
    // point 1st half towards reversed half
    midTail->next=mid;

    
    if(count==3)
    {
      return;   
    }
    
    //rearranging to get ans
    p=mid;
    q=head;
    r=q;
    while(r->next!=mid)
    {
        r=q->next;
        q->next=p;
        q=r;
        s=p->next;
        p->next=q;
        p=s;
    }
    q->next=p;
}