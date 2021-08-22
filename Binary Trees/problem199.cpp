int check_level(Node* root,bool &ans){
        if(!root || (!root->left && !root->right))
            return 1;
        
        int l = check_level(root->left,ans);
        int r = check_level(root->right,ans);
        
        if(root->left && root->right && l!=r)
            ans = false;
        return 1+max(l,r);
    }
    bool check(Node *root)
    {
        bool ans = true;
        check_level(root,ans);
        return ans;
    }