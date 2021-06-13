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
        int n;  cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int last = arr[n-1];
        for(int i=n-1;i>=1;i--)
            arr[i] = arr[i-1];
        arr[0] = last;
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}