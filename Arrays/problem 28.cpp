long long maxProduct(int *arr, int n) {
	    // code here
	    long long maxpro=1;
	    long long minpro = 1;
	    long long overallmax = 1;
	    for(int i=0;i<n;i++){
            if(arr[i]<0)
                swap(maxpro,minpro);

            maxpro = max(maxpro*arr[i],arr[i]);
            minpro = min(minpro*arr[i],arr[i]);
            
	        overallmax = max(overallmax,maxpro);
	    }
	    return overallmax;
	}