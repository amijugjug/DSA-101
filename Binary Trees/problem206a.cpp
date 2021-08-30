//Print all the paths from root which sum upto K
void printpaths(Node* root,vector<string>&op,int cursum,int S,string path){
    if(!root)
        return;
    path =path + to_string(root->data)+" ";
    cursum = cursum+root->data;
    if(cursum == S){
        op.push_back(path);
        return;
    }
    if(cursum > S)
        return;
    
    printpaths(root->left,op,cursum+root->data,S,path);
    printpaths(root->right,op,cursum+root->data,S,path);
    return;
}

//An efficient function
void print(Node *root,vector<int>&V,int cursum,int S){
    if(!root)
        return;
    V.push_back(root->data);
    cursum+=root->data;
    if(cursum==S)
        for(int i=0;i<V.size();i++)
            cout<<V[i]<<" ";
    
    if(cursum>S)
        return;
    
    print(root->left,V,cursum,S);
    print(root->right,V,cursum,S);
    
    V.pop_back();
    return;
}
void printPaths(Node *root,int S){
    if(!root)
        return;
    vector<string>OP;
    printpaths(root,OP,0,S,"");
    for(auto x:OP)
        cout<<x<<"\n";
}