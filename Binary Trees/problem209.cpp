bool lca(Node* root,vector<int>&V,int n){
    if(!root)
        return false;
    v.push_back(root->data);
    if(root->data == n)
        return true;
    
    bool l = lca(root->left,v,n);
    bool r = lca(root->right,v,n);
    
    if((root->left && l)|| (root->right && r))
        return true;
    v.pop_back();
    return false;
}
//When kth ancestor of 2 nodes are to be found it is the method
int kthancestor(Node* root, int n1,int n2,int k){
    if(!root)
        return 0;
    vector<int> v1,v2;
    bool first = lca(root,v1,n1);
    bool second = lca(root,v2,n2);
    
    if(!first || !second)
        return -1;
    int i;
    for(i=0;i<v1.size() && v2.size();i++)
        if(v1[i] != v2[i])
            break;
    if(i<k)
        return -1;
    return v1[i-1-k];
}

//When kth ancestor of 1 node have to be found it is the method

int kthancestor(Node* root,int n,int k){
    if(!root)
        return -1;
    vector<int>V;
    bool found = lca(root,V,n);
    if(!found || V.size()<k)
        return false;
    return V[V.size()-k];
}

//Recursive approach
Node* kthancestor(Node* root,int n,int &k){
    if(!root)
        return NULL;
    static Node* temp;
    if(root->data == n || temp = kthancestor(root->left,n,k)||temp = kthancestor(root->right,n,k)){
        if(k>0)
            k--;
        else if(k==0){
            cout<<"Kth ancestor is: "<<root->data;
              
            // return NULL to stop further backtracking
            return NULL;
        }
        // return current node to previous call
        return root
    }
}