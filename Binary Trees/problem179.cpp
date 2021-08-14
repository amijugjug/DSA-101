//Follow this pattern for making tree solutions
//IBH
int findHeight(Node* node,int &res){
    if(!node){
        return 0;
    }
    
    int l = findHeight(node->left,res);
    int r = findHeight(node->right,res);
    
    int temp =  1+max(l,r);
    res = max(res,temp);
    return temp;
}
int height(struct Node* node){
    int ans = INT_MIN;
    findHeight(node,ans);
    return ans;
}