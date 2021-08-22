int SumTree(Node *node){
    if(!node)
        return 0 ;
        
    int l = SumTree(node->left);
    int r = SumTree(node->right);
    
    int d = node->data;
    node->data = l+r;
    return d+node->data;
}
void toSumTree(Node *node)
{
    // Your code here
    SumTree(node);
}
