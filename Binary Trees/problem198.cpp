int SumTree(Node* root,bool &ans){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return root->data;
    int l = SumTree(root->left,ans);
    int r = SumTree(root->right,ans);
    
    if(l+r != root->data)
        ans = false;
    return l+r+root->data;
}
bool isSumTree(Node* root)
{
     // Your code here
    if(!root)
        return true;
    bool ans=true;
    int sum = SumTree(root,ans);
    // cout<<sum<<" ";
    return ans;
}