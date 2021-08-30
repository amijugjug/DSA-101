int maxSubTree(Node *root,long long &ans){
    if(!root)
        return 0;
    if(!root->left && !root->right)
        return root->data;
    
    int l = maxSubTree(root->left,ans);
    int r = maxSubTree(root->right,ans);
    
    int temp = root->data + l + r
    ans = max(ans,temp);
    return temp;
}
int findMax(Node* root){
    if(!root)
        return 0;
    int ans = INT_MIN;
    maxSubTree(root,ans);
    return ans;
}