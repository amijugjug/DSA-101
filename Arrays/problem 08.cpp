int partition(int *arr,int l,int r){
    int pivot = arr[r],in=l;
    for(int j=l;j<r;j++){
        if(arr[j]<=pivot){
            swap(arr[in],arr[j]);
            in++;
        }
    }
    swap(arr[r],arr[in]);
    return in;
}
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    
    //Using sort function O(nlogn)
    // sort(arr,arr+(r+1));
    // return arr[k-1];
    
    //Using priority_queue (max heap) in O(klogk)
    // priority_queue<int>pq;
    // for(int i=0;i<k;i++)
    //     pq.push(arr[i]);
    
    // for(int i=k;i<=r;i++){
    //     if(pq.top()>arr[i]){
    //         pq.pop();
    //         pq.push(arr[i]);
    //     }
    // }
    // return pq.top();
    int pos = partition(arr,l,r);
    if(pos+1 == k)
        return arr[pos];
    else if(pos > k-1)
        return kthSmallest(arr,l,pos-1,k);
    else
        return kthSmallest(arr,pos+1,r,k);
}