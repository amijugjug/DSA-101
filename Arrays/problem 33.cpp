bool find3Numbers(int arr[], int n, int X)
{
    //Your Code Here
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        int j=i+1,k=n-1;
        while(j<k){
            int sum = arr[i]+arr[j]+arr[k];
            if(sum == X)
                return true;
            else if(sum < X)
                j++;
            else if(sum > X)
                k--;
        }
    }
    return false;
}