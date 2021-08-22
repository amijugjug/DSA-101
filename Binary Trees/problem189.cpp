void zigZagTraversal(Node* root,vector<int>&V){
    if(!root)
        return;
    deque<Node*>Q;
    bool flag = true;
    Q.push_back(root);
    while(!Q.empty()){
        int size=Q.size();
        for(int i=0;i<size;i++){
            if(flag){
                Node* cur = Q.back();
                Q.pop_back();
                if(cur->left)
                    Q.push_front(cur->left);
                if(cur->right)
                    Q.push_front(cur->right);
            }
            else{
                Node* cur = Q.front();
                Q.pop_front();
                if(cur->right)
                    Q.push_back(cur->right);
                if(cur->left)
                    Q.push_back(cur->left);
            }
            V.push_back(cur->data);
        }
        flag = !flag;
    }
}