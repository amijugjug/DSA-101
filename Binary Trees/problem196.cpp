//Given inorder and preorder traversals construct tree
int search(int *arr,int key,int n){
    for(int i=0;i<n;i++)
        if(arr[i] == key)
            return i;
}
Node* buildTree(int in[],int pre[], int n)
{
    if(n==0)
        return NULL;
        
    Node *newNode = new Node(pre[0]);
    int i = search(in,pre[0],n);
    newNode->left = buildTree(in,pre+1,i);
    newNode->right= buildTree(in+i+1,pre+i+1,n-i-1);
    return newNode;
}