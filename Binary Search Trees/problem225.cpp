    void inorder_traversal(Node *root,vector<int>&V){
        if(!root)
            return NULL;
        inorder_traversal(root->left,V);
        V.push_back(root->data);
        inorder_traversal(root->right,V);
    }
    void reverse_inorder_traversal(Node*root,int &k,int &ans){
        if(!root)
            return;
        k--;
        if(k==0){
            ans = root->data;
            return;
        }
        reverse_inorder_traversal(root->right,k,ans);
        reverse_inorder_traversal(root->left,k,ans);
    }
    int kthLargest(Node *root, int k)
    {
        if(!root)
            return -1;
        int ans=-1;
        reverse_inorder_traversal(root,k,ans);
        return ans;
        //Naive Approach
        vector<int>V;
        inorder_traversal(root,V);
        return V.size()<k?-1:V[k-1];
        
    }