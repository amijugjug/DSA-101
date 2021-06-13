#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //code
        int n,m; cin>>n>>m;
        set<int> s;
        for(int i=0;i<n;i++){
            int ele;    cin>>ele;
            s.insert(ele);
        }
        for(int i=0;i<m;i++){
            int ele;    cin>>ele;
            s.insert(ele);
        }
        for(auto x : s)
            cout<<x<<" ";
        cout<<endl;
    }
    return 0;
}