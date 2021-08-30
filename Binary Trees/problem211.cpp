bool isIsomorphic(Node *root1,Node *root2)
{
    //Both having same height
    if(!root1 && !root2)
        return true;
    //Both are not having same height
    if(!root1 || !root2)
        return false;
    //If data in both nodes are different
    if(root1->data != root2->data)
        return;
    //If the data on both nodes are same
    if(root1->data == root2->data){
        //Check if the data is on same side
        //Check if data is on reverse side
        return((isIsomorphic(root1->left,root2->left) && 
                isIsomorphic(root1->right,root2->right))||
                (isIsomorphic(root1->left,root2->right)&&
                isIsomorphic(root1->right,root2->left)));
    }
}