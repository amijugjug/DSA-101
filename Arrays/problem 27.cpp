#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void multiply(vector<int>&v,int n){
    int carry=0,data=0,left=0;
    for(int i=v.size()-1;i>=0;i--){
        data = v[i]*n + carry;
        carry = data/10;
        left = data %10;
        v[i] = left;
    }
    while(carry){
        v.insert(v.begin(),carry%10);
        carry = carry/10;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //code
        ll n;   cin>>n;
        vector<int>v;   v.push_back(1);
        for(int i=1;i<=n;i++){
            multiply(v,i);
        }
        for(auto i:v)
            cout<<i;
        cout<<endl;
    }
    return 0;
}