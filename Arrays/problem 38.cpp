int minSwap(int *arr, int n, int k) {
    // Complet the function
    int ws=0;
    int diff=0,same=0;
    for(int i=0;i<n;i++)
        if(arr[i] <= k)
            ws++;
    
    int i=0,j=0,ans=n;
    while(j<n){
        if(arr[j] > k)
            diff++;
        
        if(j-i+1 < ws)
            j++;
        else if(j-i+1 == ws){
            if(arr[i] < k)
                diff--;
            ans = min(ans,diff);
            j++;i++;
        }
    }
    return ans;
}

//Accepted Solution...
int minSwap(int *arr,int n,int k){
    int ws=0;
    int diff=0;
    for(int i=0;i<n;i++)
        if(arr[i]<k)
            ws++;
    for(int i=0;i<ws;i++)
        if(arr[i] > k)
            diff++;
    int ans = diff;
    for(int i=0;j=ws;j<n;i++.j++){
        if(arr[i]<k)
            diff--;
        if(arr[j]>)
            diff++;
        ans = ans(min,diff);
    }
    return ans;
}