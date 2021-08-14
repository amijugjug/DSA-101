//Recursion
void preorder(Node* root){
	if(!root)
		return;
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
//Iteration
void preorder(Node* root){
	if(!root)
		return;
	stack<int>S;
	Node* cur = root;
	while(!S.empty() || cur){
		if(cur){
			S.push(cur);
			cout<<S.top()->data;
			cur = S.top()->left;
		}
		else{
			cur = S.top()->right;
			S.pop();
		}
	}
}