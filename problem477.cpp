int findPosition(int n) {
        // code here
        if(__builtin_popcount(n)!=1)
            return -1;
        return log2(n)+1;
    }