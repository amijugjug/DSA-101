    void inorder_traversal(Node* root,vector<int>&V){
        if(!root)
            return;
        inorder_traversal(root->left,V);
        V.push_back(root->data);
        inorder_traversal(root->right,V);
    }
    void make_BST(Node* root,vector<int>&V){
        if(!root)
            return;
        make_BST(root->left,V);
        root->data = V[0];
        V.erase(V.begin());
        make_BST(root->right,V);
        return;
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>V;
        Node* temp = root;
        inorder_traversal(temp,V);
        sort(V.begin(),V.end());
        temp = root;
        make_BST(temp,V);
        return root;
    }