/*Approach used is inorder traversal
 When we get the last node it will be the head of our linked list
 So we assign ans = root; means from there our linked-list will start
 if the prev is not a NULL pointer meaning it is not the leaf node obviously.
 So we assign its right to point to root 
 and root's left to point to it
 prev <=> root to establish two way link
 Note : Using prev as global varriable because it has to retain the previous value at every recursion call
    It could be passed as reference too.
    To avoid more parameters in function definition prev is made as global.
*/ 
Node* prev;
void convert(Node *root,Node **ans){
    if(!root)
        return;
    convert(root->left,ans);
    
    //Getting the head of linked list
    if(prev == NULL)
        *ans = root;
    else{
        prev->right = root;
        root->left = prev;
    }
    prev = root;
    convert(root->right,ans);
}
Node* bToDLL(Node* root)
{
    if(!root)
        return NULL;
    Node* ans = NULL;
    prev = NULL;
    convert(root,&ans);
    return ans;
}