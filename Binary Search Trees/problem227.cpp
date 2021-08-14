#define SET unordered_set<int>
void inorder_(Node* root,SET &us){
    if(!root)
        return;
    inorder_(root->left,us);
    us.insert(root->data);
    inorder_(root->right,us);
}
void count(Node *root,SET us,int x,int &c){
    if(!root)
        return;
    int res = x-root->data;
    if(us.find(res)!=us.end())
        c++;
    count(root->left,us,x,c);
    count(root->right,us,x,c);
}
int countPairs(Node* root1, Node* root2, int x)
{
    SET us;
    inorder_(root1,us);
    int c=0;
    count(root2,us,x,c);
    return c;
}