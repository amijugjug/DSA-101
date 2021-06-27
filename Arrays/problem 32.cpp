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
        int n1,n2;  cin>>n1>>n2;
        unordered_set<int>s;
        bool flag = false;
        for(int i=0;i<n1;i++){
            int ele;    cin>>ele;
            s.insert(ele);
        }
        for(int j=0;j<n2;j++){
            int ele;    cin>>ele;
            if(s.find(ele) == s.end())
                flag = true;
        }
        if(flag)    
            cout<<"No";
        else
            cout<<"Yes";
        cout<<endl;
    }
    return 0;
}