// Copy the data of next node to the current node. 
// Then, link the node after the next node to the 
// current node. This way, the required node is removed 
// but its data is saved in the current node.
class Solution
{
    public:
    void deleteNode(Node *del)
    {
       del->data=del->next->data;
       del->next=del->next->next;
       
    }

};