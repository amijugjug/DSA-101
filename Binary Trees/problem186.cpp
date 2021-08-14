void rview(Node *root,vector<int>&v,int &mxl,int crl){
    if(root==NULL)
        return;
    if(mxl<crl){
        v.push_back(root->data);
        mxl=crl;
    }
    rview(root->right,v,mxl,crl++);
    rview(root->left,v,mxl,crl++);
}
vector<int> rightView(Node *root)
{
   // Your Code here
   vector<int>v;
   int mxl = INT_MIN,crl=0;
   rview(root,v,mxl,crl);
   return v;
}