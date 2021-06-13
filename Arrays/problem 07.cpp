#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(int *arr, int n){
    int min = INT_MAX,max = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max)
            max = arr[i];
        if(arr[i]<min)
            min = arr[i];
    }
    cout << min <<" "<<max;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        //code
        int n; cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin >> arr[i];
        solve(arr,n);    
        cout<<endl;
    }
    return 0;
}