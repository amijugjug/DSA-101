void bottomView(Node *root,vector<int>&V){
    if(!root)
        return;
        
    queue<pair<Node*,int>>Q;
    map<int,int>mp;
    Q.push({root,0});
    
    while(!Q.empty()){
        auto cur = Q.front();
        Q.pop();
        if(cur.first->left)
            Q.push({cur.first->left,cur.second-1});
        if(cur.first->right)
            Q.push({cur.first->right,cur.second+1});
        mp[cur.second] = cur.first->data;
    }
    for(auto x : mp)
        V.push_back(x.second);
}
vector <int> bottomView(Node *root)
{
   // Your Code Here
   vector<int>V;
   bottomView(root,V);
   return V;
}