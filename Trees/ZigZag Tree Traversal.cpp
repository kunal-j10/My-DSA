class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
    	queue<struct Node*>q;
    	struct Node *ptr=root;
    	vector<int> v;
    	q.push(root);
    	q.push(NULL);
    	int tail=0,head=0;
    	int flag=0;
    	while(!q.empty())
    	{
    	    ptr=q.front();
    	    q.pop();
    	    
    	    if(ptr!=NULL)
    	    {
    	        v.push_back(ptr->data);
    	        head++;
    	        if(ptr->left)
    	            q.push(ptr->left);
    	        if(ptr->right)
    	            q.push(ptr->right);
    	    }
    	    if(ptr==NULL)
    	    {
    	        if(!q.empty())
    	            q.push(NULL);
    	        if(flag==0)
    	        {
    	            flag=1;
    	        }
    	        else{
    	            flag=0;
    	            reverse(v.begin()+tail,v.end());
    	        }
    	        tail=head;
    	    }
    	}
    	return v;
    }
};