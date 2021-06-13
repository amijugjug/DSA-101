//Greedy approach
int getMinDiff(int arr[], int n, int k) {
    if(n == 1)
        return 0;
    sort(arr, arr+n);
    
    int ans = arr[n-1] - arr[0];
    
    int max = arr[n-1] - k; // Possible max
    int min = arr[0] +k;  //possible min
    if(max<min) 
        swap(max,min);
    
    for(int i=1;i<n-1;i++){
        int cur_max = arr[i] + k;
        int cur_min = arr[i] - k;
        

        // As we are trying to minimize the height, we don't have to choose the minimum or maximum height
        // out of the options, if the add is smaller than big, then we choose this or if it is greater than small we choose that.
        // so we ignore for the following case
        if(cur_max < max || cur_min > min)
            continue;
        
        if(max - cur_min < cur_max - min)
            min = cur_min;
        else
            max = cur_max;
    
    }
    if(ans > (max-min))
        return (max-min);
    return ans;
}

// Explanation : https://stackoverflow.com/questions/32233916/minimum-difference-between-heights-of-towers/63220955#63220955
int getMinDiff(int arr[], int n, int k) {
    // code here
    sort(arr,arr+n);
    int res = arr[n-1] - arr[0];
    for(int i=0;i<n;i++){
        if(arr[i] >= k){
            int mn = min(arr[0]+k,arr[i]-k);
            int mx = max(arr[i-1]+k,arr[n-1]-k);
            res = min(res,mx-mn);
        }
    }
    return res;
}
