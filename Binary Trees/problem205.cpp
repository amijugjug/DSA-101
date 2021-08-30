pair<int,int> maxSumofNodes(Node *root){
    if(!root)
        //When you reach NULL the value there is zero
        return make_pair(0,0);
    
    auto l = maxSumofNodes(root->left);
    auto r = maxSumofNodes(root->right);
    
    pair<int,int>sum;
    //Include the current node and its left and right child are exluded
    sum.first = root->data + l.second + r.second;
    //Excluded the current node and maximum of its left and right child is included
    sum.second = max(l.first,l.second) + max(r.first,r.second);
    return sum;
}

