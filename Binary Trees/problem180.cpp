int findDiameter(Node *root,int &res){
    if(!root)
        return 0;
    int l = findDiameter(root->left,res);
    int r = findDiameter(root->right,res);
    
    //If parent node is considered
    int temp = 1+max(l,r);
    //If parent node is not considered
    int ans = max(temp,l+r+1);
    //Final Answer
    res = max(res,ans);
    
    return temp;
    
}
int diameter(Node* root)
{
// Your code here
    if(!root)
        return 0;
    
    int ans = INT_MIN;
    findDiameter(root,ans);
    return ans;    
}