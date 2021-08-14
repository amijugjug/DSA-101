//Using Morris Inorder Traversal,it takes O(1) auxilary space and O(n) time
//When we reach a leaf node we make the right pointer of it to point to parent node
    void kthsmall(Node* root,int k,int &ans){
        Node* cur = root;
        while(cur){
            if(!cur->left){
                k--;
                if(k==0){
                    ans = cur->data;
                    return;
                }
                cur = cur->right;
            }
            else if(cur->left){
		//Find inorder predeccesor
                Node* t=cur->left;
                while(t->right!=NULL && t->right!=cur)
                    t = t->right;
                
		//If t->right == NULL it means we have encountered this node for the first time so points its right ptr to the current node
		if(t->right == NULL){
                    t->right = cur;
                    cur = cur->left;
                }
		//This means that we have encountered this node for the second time and the data of the node its right poniter is pointing is processed
                else if(t->right == cur){
                    t->right = NULL;
                    k--;
                    if(k==0){
                        ans = cur->data;
                        return;
                    }
                    cur = cur->right;
                }
            }
        }
    }
//Naive approach using inorder traversal
    void inorder_traversal(Node* root,int &k,int &ans){
        if(!root)
            return;
        inorder_traversal(root->left,k,ans);
        k--;
        if(k==0){
            ans = root->data;
            return;
        }
        inorder_traversal(root->right,k,ans);
    }
    int KthSmallestElement(Node *root, int K)
    {
        if(!root)
            return -1;
        int ans = -1;
        kthsmall(root,K,ans);
    
        // inorder_traversal(root,K,ans);
        return ans;
    }