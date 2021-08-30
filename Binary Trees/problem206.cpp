//Print all the nodes which sum upto K no matter from where they are starting and where they are ending
void print(Node* root,vector<int>&V){
	if(!root)
		return;
	//Do a pre-order traversal and insert the nodes in vector
	V.push_back(root->data);
	print(root->left,V);
	print(root->right,V);

	//Check from the currently connected nodes if a sum upto K exist
	int csum=0;
	for(int i=v.size()-1;i>=0;i--){
		csum+=V[i];
		//If sum exist print it.
		if(csum == K)
			for(int j=i;j<v.size();j++)
				cout<<v[j]<<" ";
	}
	V.pop_back();
}