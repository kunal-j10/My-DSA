class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        Node *ptr =head,*q=NULL;
        map<int,int> mp;
        while(ptr)
        {
            
            if(mp[ptr->data]==0)
            {
                mp[ptr->data]++;
                q=ptr;
                
            }
            else{
                q->next=ptr->next;
            }
            ptr=ptr->next;
        }
        return head;
    }
};