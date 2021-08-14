//As per naive approach we could use two loops and keep track of answer by this way the complexity would be O(N^2)
//Other solution written her s using BST, here also if the tree is skweed
//Complexity goes up to O(n^2) else in case of balance BST complexity would resuced to O(nlogn)


struct Node{
	int data;
	struct Node* left,*right;
	Node(d){
		data = d;
		left = NULL;right = NULL:
	}
};
//Here we are making a BST
//Note : succ is passed as reference

Node* insert(Node *root,int d,Node* &succ){
	if(!root)
		return node = new Node(d);
	//If key is smaller than root->data
	//set succ as current node and move to its left
	else if(root->data > d){
		succ = node;
		root->left = insert(root->left,d,succ);
	}
	//Go to right 
	else if(root->data < d)
		root->right = insert(root->right,d,succ);
	return root;
}
//Traverse the array from behind if successor is found insert its data in array
//else insert -1.

void replace(int *arr,int n){
	Node* root=NULL;
	for(int i=n-1;i>=0;i--){
		Node*succ = NULL;
		root= insert(root,arr[i],succ);
		if(succ)
			arr[i] = succ->data;
		else
			arr[i] = -1;
	}
}