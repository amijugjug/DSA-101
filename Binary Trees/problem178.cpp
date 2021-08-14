void traversal(Node *root,vector<int>&V){
    if(!root)
        return;
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty()){
        if(Q.front()->right)
            Q.push(Q.front()->right);
        if(Q.front()->left)
            Q.push(Q.front()->left);
        V.push_back(Q.front()->data);
        Q.pop();
    }
}
vector<int> reverseLevelOrder(Node *root)
{
    vector<int>V;
    traversal(root,V);
    reverse(V.begin(),V.end());
    return V;
}