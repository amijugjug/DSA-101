void topView(struct Node *root,vector<int>&V)
{
    if(!root)
        return;
    //Denoting at ith level value of node is
    map<int,int> mp; // map<level,value>mp
    //Denoting node at ith level
    queue<pair<Node*,int>> q;
    q.push({root,0});
    
    while(!q.empty()){
        auto cur=q.front();
            q.pop();
        if(mp.find(cur.second) == mp.end())
            mp[cur.second]=cur.first->data;
        if(cur.first->left)
            q.push({cur.first->left,cur.second-1});
        if(cur.first->right)
            q.push({cur.first->right,cur.second+1});
    }
    for(auto x:mp)
        V.push_back(x.second); 
        
}
vector<int> topView(Node *root)
{
    vector<int>V;
    topView(root,V);
    return V;
}