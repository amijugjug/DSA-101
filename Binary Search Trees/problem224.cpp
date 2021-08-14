Node*makeBST(vector<Node*>V,int low,int high){
    if(low>high)
        return NULL;
    int mid = (low+high)/2;
    Node* root = V[mid];
    
    root->left = makeBST(V,low,mid-1);
    root->right = makeBST(V,mid+1,high);
    return root;
}

vector<Node*> merge(vector<Node*>v1,vector<Node*>v2){
    vector<Node*>V;
    int i=0,j=0,m=v1.size(),n=v2.size();
    while(i<m && j<n){
        if(v1[i]->data < v2[j]->data)
            V.push_back(v1[i++]);
        else if(v1[i]->data > v2[j]->data)
            V.push_back(v2[j++]);
    }
    while(i<m)
        V.push_back(v1[i++]);
    while(j<n)
        V.push_back(v2[j++]);
    return V;
}
void inorder_traversal(Node*root, vector<Node*>&V){
    if(!root)
        return;
    inorder_traversal(root->left,V);
    V.push_back(root);
    inorder_traversal(root->right,V);
}
Node* mergeBST(Node* n1,Node* n2){
    if(!n1)
        return n2;
    if(!n2)
        return n1;
    vector<Node*>V1;
    vector<Node*>V2;
    inorder_traversal(n1,V1);
    inorder_traversal(n2,V2);
    vector<Node*> V = merge(v1,v2);
    return makeBST(V,0,V.size()-1);
}