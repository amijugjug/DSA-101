int setSetBit(int x, int y, int l, int r){
        // code here
        // int maskLength = (1<<(r-l+1))-1;
        // int mask = (maskLength<<(l-1)) & y;
        // return x|mask;
        for(int i=l;i<=r;i++){
            int mask = 1<<(i-1);
            if(y&mask)
                x = x|mask;
        }
        return x;
    }