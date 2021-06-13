int findDuplicate(vector<int>& arr) {
        //Consider 0 index will contain 1
        //Use swap-sort procedure
        int n = arr.size();
        for(int i=0;i<n;){
            if(arr[i] != arr[arr[i]-1])
                swap(arr[i],arr[arr[i]-1]);
            else
                i++;
        }   
        for(int i=0;i<n;i++){
            if (arr[i] != i+1)
                return arr[i];
        }
        return 0;
    }