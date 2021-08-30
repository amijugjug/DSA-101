void path(Node*root,int n,vector<Node*>&v){
    if(!root)
        return;
    
    v.push_back(root);
    if(root->data == n)
        return;
    
    path(root->left,n,v);
    path(root->right,n,v);
    
    v.pop_back();
    return;
}
int findDist(Node* root, int a, int b) {
    if(!root)
        return 0;
    vector<Node*>v1,v2;
    
    path(root,a,v1);
    path(root,b,v2);

    int i;
    for(i=0;i<v1.size() && i<v2.size();i++)
        if(v1[i]!=v2[i])
            break;
    return v1.size() + v2.size() - 2*(i-1);
}