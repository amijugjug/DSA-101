//Recursion
void postorder(Node* root){
	if(!root)
		return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}
//Iteration
void postorder(Node* root){
	if(!root)
		return;
	stack<Node*> s;
    s.push(root);
    stack<int> out;
    while (!s.empty())
    {
        Node* curr = s.top();
        s.pop();
 
        out.push(curr->data);
 
        if (curr->left) {
            s.push(curr->left);
        }
 
        if (curr->right) {
            s.push(curr->right);
        }
    }
 
    // print postorder traversal
    while (!out.empty())
    {
        cout << out.top() << " ";
        out.pop();
    }
}