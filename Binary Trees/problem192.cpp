void leafnodes(Node *root,vector<int>&v){
    if(root==NULL)
        return;
    
    leafnodes(root->left,v);

    //If the current node is leaf node
    if(!root->left && !root->right)
        v.push_back(root->data);
    
    leafnodes(root->right,v);
}

void left_boundary(Node*root,vector<int>&v){
    if(root==NULL)
        return;

    //If the node is not the leaf node then push it back
    if(root->left || root->right)
        v.push_back(root->data);
    
    if(root->left)
        left_boundary(root->left,v);
    else if(root->right)
        left_boundary(root->right,v);

}

void right_boundary(Node*root,vector<int>&v){
    if(root==NULL)
        return ;
    

    //Using else if condition because when recursion backtrack it checks for right tree also
    //If at node N it is any internal node then it'll be wrong.
    if(root->right)
        right_boundary(root->right,v);
    else if(root->left)
        right_boundary(root->left,v);

    //If the node is not the leaf node then push it back
    if(root->left|| root->right)
        v.push_back(root->data);
}

vector <int>printBoundary(Node *root)
{
    vector<int>v;
    if(root==NULL)
        return v;
    
    v.push_back(root->data);
    
    left_boundary(root->left,v);
    leafnodes(root,v);
    right_boundary(root->right,v);
    
    return v;
}