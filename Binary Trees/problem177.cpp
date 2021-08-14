void traversal(Node *root,vector<int>&V){
    if(!root)
        return;
    queue<Node*>Q;
    Q.push(root);
    while(!Q.empty()){
        if(Q.front()->left)
            Q.push(Q.front()->left);
        if(Q.front()->right)
            Q.push(Q.front()->right);
        V.push_back(Q.front()->data);
        Q.pop();
    }
}
vector<int> levelOrder(Node* node)
{
  //Your code here
  vector<int>V;
  traversal(node,V);
  return V;
}
