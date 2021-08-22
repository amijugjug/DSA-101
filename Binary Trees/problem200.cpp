/*
$ sign is used because if we have to handle the case like 4<-2->5 and 2->4->5
then in both case string is equal but the subtree is not.
*/
unordered_map<string,int>um;
string solve(Node *root,bool &ans){
    if(!root)
        return "$";
    if(!root->left && !root->right)
        return to_string(root->data);
    
    string l = solve(root->left,ans);
    string r = solve(root->right,ans);
    string str = to_string(root->data)+l+r;
    
    um[str]++;
    if(um[str] == 2)
        ans = true;
    return str;
}
bool dupSub(Node *root)
{
    if(!root)
        return false;
    bool ans = false;
    um.clear();
    solve(root,ans);
    return ans;
}