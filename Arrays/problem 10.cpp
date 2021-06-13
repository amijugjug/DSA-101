#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int n;	cin>>n;
    	int arr[n];
    	for(int i=0;i<n;i++)
    		cin>>arr[i];
    	int l=0,r=n-1;
    	int i=0;
    	while(l!=r){
    		if(arr[i]< 0){
    			swap(arr[i],arr[l]);
    			l++;
    		}
    		else if(arr[i]>0){
    			swap(arr[i],arr[r]);
    			r--;
    		}
    	}
    	for(int i=0;i<n;i++)
    		cout<<arr[i]<<" ";
    	cout<<endl;
    }
}