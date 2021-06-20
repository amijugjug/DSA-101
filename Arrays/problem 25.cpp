void segregate(int *arr,int n){
    bool flag=false;
    int i,j,k,l;
    int key;
    for(i=0;i<n;i++){
        if(i%2 == 0 && arr[i]>0){
            for(j=i;j<n;j++)
                if(arr[j]<0)
                    break;
            if(j<n){
                key = arr[j];
                for(k=j;k>=i+1;k--)
                    arr[k] = arr[k-1];
                arr[k] = key;
            }
            else
                break;
        }
        else if(i%2 == 1 && arr[i]<0){
            for(j=i;j<n;j++)
                if(arr[j]>0)
                    break;
            if(j<n){
                key = arr[j];
                for(k=j;k>=i+1;k--)
                    arr[k] = arr[k-1];
                arr[k] = key;
            }
            else
                break;
        }
    }
}