class Solution{
  public:
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        struct Node* P;
        P= head1;
        int count =0;
        int arr[10000+1]={0};
        while(P !=0)
        {
            arr[P->data]++;
            P= P->next;
        }
        P= head2;
        while(P!=0)
        {
            if(P->data<x && arr[x - P->data]>0)  // P->data<x to insure 
            {                                    //we dont search for -ve index in Hash Table
                count++;
                arr[x-P->data]--;   // to remove any dublicate entry possi
            }
            P= P->next;
        }
        return count;
    }
};
