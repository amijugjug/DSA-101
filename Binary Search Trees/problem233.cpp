//Basically we are working on range
//If the range matches i.e min==max then we can't insert any element after that
//Also the question is set for natural numbers so if we encounter either min or max as 1 we cant insert any element after that also
//Root->data-1 or root->Data+1 is done to minimize the range which starts from INT_MIN, INT_MAX
void check(Node*root,int min,int max,bool &ans){
    if(!root)
        return;
    if((!root->left && !root->right) && (min == max || max == 1 || min == 1)){
        ans = true;
        return;
    }
    check(root->left,min,root->data-1,ans);
    check(root->right,root->data+1,max,ans);
}
bool isDeadEnd(Node *root)
{
    //Your code here
    bool ans = false;
    check(root,INT_MIN,INT_MAX,ans);
    return ans;
}