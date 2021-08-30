void LongestPath(Node* root,int &maxsum,int &maxlen,int len,int sum){
    if(!root){
        if(maxlen<len){
            maxlen = len;
            maxsum = sum;
        }
        else if(maxlen == len)
            maxsum = max(maxsum,sum);
        return;
    }
    LongestPath(root->left,maxsum,maxlen,len+1,sum+root->data);
    LongestPath(root->right,maxsum,maxlen,len+1,sum+root->data);
}
int sumOfLongRootToLeafPath(Node* root)
{
    if(!root)
        return 0;
    int maxlen=INT_MIN,maxsum = INT_MIN;
    LongestPath(root,maxsum,maxlen,0,0);
    return maxsum;
}