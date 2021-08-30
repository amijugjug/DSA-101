//This method require O(n) extra space
//We store the nodes in vector when dezired node is found we stop the recursion and sends back the vector.
// Bool values are used to optimize the recursive calls
bool find_node(Node* root,int n,vector<Node*>&v){
    if(!root)
        return false;
    v.push_back(root);
    if(root->data == n)
        return true;

    bool l = find_node(root->left, n,v);
    bool r = find_node(root->right, n,v);
    
    if ((root->left && l) || (root->right && r))
        return true;

    v.pop_back();
    return false;
}

//Create two vectors for both 
//If any of the values does not exist return null
//else traverse till the values are same then return.
Node* lca(Node* root ,int n1 ,int n2 )
{
   //Your code here 
   
   vector<Node*>v1,v2;
   bool first = find_node(root,n1,v1);
   bool second = find_node(root,n2,v2);
   if(!first || !second)
      return NULL;
   int i;
   for(i=0;i<v1.size() && i<v2.size();i++){
       if(v1[i] != v2[i])
        break;
   }
   return v1[i-1];
}


Node* lca(Node *root,int n1,int n2){
    if(!root)
      return NULL;
    
    if(root->data == n1||root->data==n2)
      return root;

    Node *l = lca(root->left,n1,n2);
    Node *r = lca(root->right,n1,n2);

    if(l && r)
      return root;
    return l!=NULL?l:r;
}