int sb(int arr[], int n, int x){
    int j=0,i=0;
    long long sum=0;
    int min_len=n;
    while(j<n){
        sum+=arr[j];
        if(sum<x)
            j++;
        else if(sum>=x){
            while(sum - arr[i] > x)
                    sum-=arr[i++];

            min_len = min(min_len,(j-i+1));
            j++;
        }
    }
    return min_len;
}