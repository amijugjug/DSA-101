#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(int arr[], int n){
    int till_m = 0;
    int max_so_far = 0;
    
    for(int i=0;i<n;i++){
        till_m += arr[i];
        if(till_m < 0)
            till_m = 0;
        if(max_so_far < till_m)
            max_so_far = till_m;
    }
    return max_so_far;
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        cout << maxSubarraySum(a,n) << endl;
    }
}