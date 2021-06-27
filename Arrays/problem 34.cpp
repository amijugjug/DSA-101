int trappingWater(int arr[], int n){
    
    int agr[n];
    agr[n-1] = arr[n-1];
    for(int i=n-2;i>=0;i--)
       agr[i] = max(agr[i+1],arr[i]);
       
    int agl[n];
    agl[0] = arr[0];
    for(int i=1;i<n;i++)
        agl[i] = max(agl[i-1],arr[i]);
    
    int sum = 0;
    for(int i=0;i<n;i++)
        sum = sum + min(agr[i],agl[i]) - arr[i];
    
    return sum;
}