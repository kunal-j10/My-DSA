/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) 
{
    struct SinglyLinkedListNode* current;
    current = (struct SinglyLinkedListNode* )malloc(sizeof(struct SinglyLinkedListNode));
    current->data=data;
    current->next=NULL;
    if(head==NULL)
    {
        head=current;
        return head;
    }
    else
    {
        struct SinglyLinkedListNode* ptr;
        ptr=head;
        while(head->next!=NULL)
        {
            head=head->next;
        }
        head->next=current;
        return ptr;

    }

}