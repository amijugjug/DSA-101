void find(Node *root,int n1,int n2,Node **ans){
    if(!root)
        return;
    if(root->data >= n1 && root->data <= n2){
        *ans = root;
        return;
    }
    if(root->data < n1)
        find(root->right,n1,n2,ans);
    if(root->data > n2)
        find(root->left,n1,n2,ans);
}
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
   if(!root)
    return NULL;
   Node *ans = NULL;
  
   if(n2<n1)
    swap(n1,n2);
    
   find(root,n1,n2,&ans);
   return ans;
}

