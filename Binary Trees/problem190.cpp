int height(Node* root){
    if(!root)
        return 0;
    int l = height(root->left);
    int r = height(root->right);
    //-1 is returned when left subtree is not balanced
    //-1 is returned when right subtree is not balanced
    //-1 is returned when difference of LST height and RST height is greater than 1
    if(l==-1 || r=-1 || abs(l-r)>1)
        return -1;
    else
    //Return the height
        return 1+max(l,r);
}
bool isBalanced(Node *root)
{
    if(!root)
        return 1;
    return height(root) != -1;
}