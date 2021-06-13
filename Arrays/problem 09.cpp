#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;  cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        int zctr=0,tctr=n-1;
        for(int i=0;i<=tctr;i++){
            if(arr[i] == 0){
                swap(arr[i],arr[zctr]);
                zctr++;
            }
            else if(arr[i] == 1)
                continue;
            else {
                swap(arr[i],arr[tctr]);
                i--;
                tctr--;
            }
        }
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}