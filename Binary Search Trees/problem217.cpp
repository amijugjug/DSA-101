void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    if(!root){
        return;
    }
    else if(root->key == key){
        if(root->right){
            suc = root->right;
            while(suc->left)
                suc = suc->left;
        }
        if(root->left){
            pre = root->left;
            while(pre->right)
                pre = pre->right;
        }
    }
    else if(key<root->key){
        suc = root;
        findPreSuc(root->left,pre,suc,key);
    }
    else{
        pre = root;
        findPreSuc(root->right,pre,suc,key);
    }
}