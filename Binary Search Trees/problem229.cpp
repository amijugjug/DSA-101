void inorder_traversal(Node*root,int l,int h,int &ans){
    if(!root)
        return;
    if(root->data>=l && root->data<=h){
        ans++;
        inorder_traversal(root->left,l,h,ans);
        inorder_traversal(root->right,l,h,ans);
    }
    else if(root->data < l)
       inorder_traversal(root->right,l,h,ans);
    else if(root->data > h)
        inorder_traversal(root->left,l,h,ans);
}
int getCount(Node *root, int l, int h)
{
  // your code goes here  
  int ans = 0;
  inorder_traversal(root,l,h,ans);
  return ans;
}