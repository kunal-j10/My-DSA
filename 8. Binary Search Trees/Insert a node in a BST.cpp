void insert_key(struct Node *root, int key) {
    struct Node *p,*q;
    p=root;
    while(p != NULL)
    {
        q=p;
        if(p->data > key)
            p = p->left;
        else if(p->data <key)
            p = p->right;
        else
            return 0;
    }
    p=createNewNode(key);
    if(q->data > key)
        q->left=p;
    if(q->data < key)
        q->right = p;
    
}

// Recursive Method

Node* insert(Node* root, int Key) {
    if(root==NULL)
        return new Node(Key);
    if(root->data>Key)
        root->left = insert(root->left,Key);
    else if(root->data<Key)
        root->right = insert(root->right,Key);
    
    return root;
}