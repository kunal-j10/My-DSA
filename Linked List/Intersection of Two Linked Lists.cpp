class Solution{
  public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        int max=head1->data,min=head1->data;
        
        struct Node *p=head2,*q=head2;
        
        //finding max to create Hash Table
        while(p!=NULL)
        {
            if(p->data>max)
            {
                max=p->data;
            }
            p=p->next;
        }
        p=head1;
        
        //Considering max from other LL as if ignored
        // it may lead to Segmentation fault in later steps
        while(p!=NULL)
        {
            if(p->data>max)
            {
                max=p->data;
            }
            p=p->next;
        }
        
        int H[max+1]={0};
        p=head2;
        
        // filling Hash Table
        while(p!=NULL)
        {
            H[p->data]++;
            p=p->next;
        }
        p=head1;
        int flag=0;
        
        // Checking dublicates from hash table
        while(p!=NULL)
        {
            if(H[p->data]>0)
            {
                if(flag!=0)
                {
                    q=q->next;
                }
                q->data=p->data;
                flag=1;
            }
            p=p->next;
        }
        q->next=NULL;
        return head2;
    }
};