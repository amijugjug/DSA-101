//O(N) approach this states that we took arange between min and max if the ket lies between this range then make a node
//pi is pointing to the current index to which the node is to be made now
//Now we know the LST lies between range min and current key and RST lies between range current key and max
Node* Ctree(int *prefix,int &pi,int min,int max,int key,int size){
	if(pi>size)
		return NULL;
	Node* root=NULL;
	if(min<key && key<max){
		root = new Node(key);
		pi = pi+1;
		if(pi<size)
			root->left = Ctree(prefix,pi,min,key,prefix[pi],size);
		if(pi<size)
			root->right = Ctree(prefix,pi,key,max,prefix[pi],size);
	}
}
Node* construct(int *prefix,int n){
	int pi = 0;
	return Ctree(pefix,pi,INT_MIN,INT_MAX,prefix[pi],n);
}
//It is O(n^2) approach
//Idea is if we are having prefix array then from root to i-1(i is the index of which is greater than root) will come in LST
//and from i to n-1 comes in RST.
Node* Ctree(int *prefix,int &pi,int low,int high,int key,int size){
	if(pi>=size || low>high)
		return NULL;
	Node *root = new Node(key);
	pi = pi+1;
	if(pi == size)
		return root;
	int i=low;
	while(i<=high)
		if(prefix[i]>root->data)
			break;

	root->left =  Ctree(prefix,pi,low,i-1,,prefix[pi],size);
	root->right =  Ctree(prefix,pi,i,high,prefix[pi],size);
}
Node* construct(int *prefix,int n){
	int pi=0;
	return Ctree(prefix,pi,0,n-1,prefix[pi],n);
}