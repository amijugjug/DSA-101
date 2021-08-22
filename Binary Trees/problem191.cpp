void DiagnolTraversal(Node* root,vector<int>&V){
    if(!root)
        return;
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty()){
        Node* cur = Q.front();
        Q.pop();
        //Traverse to right side if you get anything at left
        //Push it to queue for the mext time to traverse
        while(cur){
            if(cur->left)
                Q.push(cur->left);
            V.push_back(cur->data);
            cur = cur->right;
        }
    }
}
vector<int> diagonal(Node *root)
{
   vector<int>V;
   DiagnolTraversal(root,V);
   return V;
}