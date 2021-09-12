bool isPowerofTwo(long long n){
        return __builtin_popcount(n) == 1;
        // OR
        return (1<<(int)log2(n)) == n;
        // Where (int)log2(n) represent the nearest power of 2 near to n
    }