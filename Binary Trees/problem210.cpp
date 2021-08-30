string solve(Node* root,vector<int> &v,map<string,int> &mp)
{
    string s="";
    if(root==NULL)
    return "";
    
    string l = solve(root->left,v,mp);
    string r = solve(root->right,v,mp);
    
    string str =to_string(root->data) + l + r;
    if(mp[s]==1)
        v.push_back(root->data);
    
    mp[s]++;
    return s;
}

void printAllDups(Node* root)
{
    map<string,int> mp;
    vector<int> v;
    solve(root,v,mp);
    if(v.size()==0) 
        cout<<-1;
    else{ 
        sort(v.begin(),v.end());
        for(auto x:v) 
            cout<<x<<" ";
    }
}