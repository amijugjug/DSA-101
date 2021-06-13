int maxSubarraySum(int arr[], int n){
    //Kadane's Algorithm
    // Your code here
    int till_m = 0;
    int max_so_far = arr[0];
    
    for(int i=0;i<n;i++){
        till_m += arr[i];
        
        if(till_m < 0)
            till_m = 0;
        if(max_so_far < till_m)
            max_so_far = till_m;
    }
    return max_so_far;
}