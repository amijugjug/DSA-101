/*void insertion_sort(int *arr,int n){
    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}*/
void merge(int arr1[], int arr2[], int n, int m) {
    // code here
    /*for(int i=0;i<n;i++){
        if(arr1[i]>arr2[0]){
            swap(arr1[i],arr2[0]);
            insertion_sort(arr2,m);
        }
    }*/
   
   int i = n-1;
   int j=0;
   while(i>=0&&j<m){
       if(arr1[i] > arr2[j])
            swap(arr1[i],arr2[j]);
       i--;j++;
   }
   sort(arr1,arr1+n);
   sort(arr2,arr2+m);
}