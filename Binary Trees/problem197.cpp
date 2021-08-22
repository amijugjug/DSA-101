//Find minimum swaps required to convert binary tree to BST
int minswaps(vector<int>&v){
    int n=v.size();
    vector<pair<int,int>>op(n);
    for(int i=0;i<n;i++)
        op[i] = {v[i],i};
    sort(v.begin(),v.end());
    int ans=0;
    for(int i=0;i<n;i++){
        if(i != op[i].second){
            swap(op[i],op[op[i].second]);
            ans++;i--;
        }
    }
    return ans;
}