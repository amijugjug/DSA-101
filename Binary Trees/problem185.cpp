void lview(Node *root,vector<int>&v,int &mxl,int crl){
    if(root==NULL)
        return;
    if(mxl<crl){
        v.push_back(root->data);
        mxl=crl;
    }
    lview(root->left,v,mxl,crl++);
    lview(root->right,v,mxl,crl++);
}
vector<int> leftView(Node *root)
{
   // Your Code here
   vector<int>v;
   int mxl = INT_MIN;
   lview(root,v,mxl,0);
   return v;
}