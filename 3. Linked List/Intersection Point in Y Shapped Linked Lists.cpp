int intersectPoint(Node* head1, Node* head2)
{
    struct Node *p,*q,*r;
    p=head1,q=head2;
    stack<Node*> st1,st2;
    while(p!=NULL)
    {
        st1.push(p);
        p=p->next;
    }
    while(q!= NULL)
    {
        st2.push(q);
        q=q->next;
    }
    int result =-1;
    while(!st1.empty() && !st2.empty())
    {
        if(st1.top()==st2.top())
        {
            r= st1.top();
            result= r->data;
        }
        st1.pop();
        st2.pop();
    }
    return result;
}