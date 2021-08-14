//Creating mirror tree in O(n) aux
void mirrorify(node* root, node** mirror)
{
    if (root == NULL) {
        mirror = NULL;
        return;
    }
 
    // Create new mirror node from original tree node
    *mirror = createNode(root->val);
    mirrorify(root->left, &((*mirror)->right));
    mirrorify(root->right, &((*mirror)->left));
}
//Creating mirror tree inplace
node* mirrorify2(Node *root){
	if(!root)
		return NULL;
	//Swap the left and right nodes with eachother
	node* t = root->left;
	root->left = root->right;
	root->right = t;
	
	//Call for its LST and RST
	mirrorify2(root->left);
	mirrorify2(root->right);
	return root;
}
int main(){
	Node *root,...
	Node * mirror = NULL;
	mirrorify(root,mirror);
	mirrorify2(root);
}