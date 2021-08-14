//Count Node using Moris Traversal
int count_nodes(Node*root){
    Node* cur = root;
    int count=0;
    while(cur){
        if(cur->left == NULL){
            count++;
            cur = cur->right;
        }
        else{
            Node* t = cur->left;
            while(t->right!=NULL && t->right!=cur)
                t=t->right;
            if(t->right==NULL){
                t->right = cur;
                cur = cur->left;
            }
            else{
                t->right = NULL;
                count++;
                cur = cur->right;
            }
        }
    }
    return count;
}
int morris_inorder(Node* root,int n,int &ans){
    Node* cur = root;
    while(cur){
        if(cur->left == NULL){
            n--;
            if(n==0)
                ans =  root->data;
            cur = cur->right;
        }
        else{
            Node* t = cur->left;
            while(t->right!=NULL && t->right!=cur)
                t=t->right;
            if(t->right==NULL){
                t->right = cur;
                cur = cur->left;
            }
            else{
                t->right = NULL;
                n--;
                if(n==0)
                    ans =  root->data;
                cur = cur->right;
            }
        }
    }
}
//This approach traverses the tree 3 times in O(n)time and O(1)space
int median_of_BST(Node* root){
    int n = count_nodes(root);
    int odd=-1,even1=-1,even2=-1;
    if(n&1){
        morris_inorder(root,n/2,odd);
        return odd;
    }
    else{
        morris_inorder(root,n/2,even1);
        morris_inorder(root,(n+1)/2,even2);
        return (even1+even2)/2;
    }
}
//Traversing tree only one time
int morris_inorder(Node* root){
    int count = count_nodes(root);
    Node* cur = root;
    Node* prev = NULL;
    int curcount = 0;
    int ans = -1;
    while(cur){
        if(root->left == NULL){
            curcount++;
            if(count%2 == 1 && count/2 == curcount)
                ans = cur->data;
            else if(count/2 == curcount && count%2==1)
                ans = cur->data + prev->data;
            prev = cur;
            cur = cur->right;
        }
        else{
            Node *t = cur->left;
            while(t->right!=NULL && t->right!=cur)
                t=t->right;
            if(t->right==NULL){
                t->right=cur;
                cur=cur->left;
            }
            else{
                t->right = NULL;
                curcount++;
                if(count%2 == 1 && count/2 == curcount)
                    ans = cur->data;
                else if(count/2 == curcount && count%2==1)
                    ans = cur->data + prev->data;
                prev = cur;
                cur = cur->right;
            }
        }
    }
    return ans;
}
int findMedian(Node* root){
    if(!root)
        return -1;
    return morris_inorder(root);
}