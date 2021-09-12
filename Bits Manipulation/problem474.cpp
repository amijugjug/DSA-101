int countBitsFlip(int a, int b){
    
    // Your logic here
    return __builtin_popcount(a^b);
}