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


// Recursive Approach

class Solution{
    public:
    int height(Node* root)
    {
        if(root!=NULL)
        {
            int x= height(root->left);
            int y= height(root->right);
            return max(x,y)+1;
        }
        return 0;
    }
    void zzTransverse(Node* root,int height,bool lor,vector<int> &v)
    {
        if(height<=1)
            v.push_back(root->data);
        else
        {
            if(lor)
            {
                if(root->left)
                    zzTransverse(root->left,height-1,lor,v);
                if(root->right)
                    zzTransverse(root->right,height-1,lor,v);
            }
            else{
                if(root->right)
                    zzTransverse(root->right,height-1,lor,v);
                if(root->left)
                    zzTransverse(root->left,height-1,lor,v);
            }
        }
    }
    
    vector <int> zigZagTraversal(Node* root)
    {
    	int maxHeight = height(root);
    	vector<int> v;
    	bool ltor =1;
    	for(int i=1;i<=maxHeight;i++)
    	{
    	    zzTransverse(root,i,ltor,v);
    	    ltor=!ltor;
    	}
    	return v;
    }
};