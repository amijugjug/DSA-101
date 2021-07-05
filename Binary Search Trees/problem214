Node* insert(Node* root, int k)
{
    // Your code here
    Node *temp = root;
    while(1){
        if(temp->data == k)
            return root;
        else if(temp->data<k){
            if(temp->right)
                temp=temp->right;
            else{
                temp->right = new Node(k);
                return root;
            }
        }
        else if(temp->data > k){
            if(temp->left)
                temp = temp->left;
            else{
                temp->left = new Node(k);
                return root;
            }
        }
    }
}
