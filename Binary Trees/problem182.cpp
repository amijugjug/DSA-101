//Recursion
void inorder(Node* root){
	if(!root)
		return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}
//Iteration
void inorder(Node* root){
	if(!root)
		return;
	stack<int>S;
	Node* cur = root;
	while(!S.empty() || cur){
		if(cur){
			S.push(cur);
			cur = cur->left;
		}
		else{
			cout<<S.top()->data;
			cur = S.top()->right;
			S.pop();
		}
	}
}