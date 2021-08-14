/*
Idea is to traverse the tree if since it is BST
so if root-> lies between n1 & n2 then root is the LCA
otherwise if the root->data < n1 and n2 then LCA lies in left portion
else lca lies in right portion.
*/
Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
    if(!root)
        return NULL;
    if(root->data < n1 && root->data < n2)
        return LCA(root->right,n1,n2);
    else if(root->data>n1 && root->data>n2)
        return LCA(root->left,n1,n2);
    return root;
}