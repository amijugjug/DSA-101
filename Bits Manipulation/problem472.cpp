int setBits(int N) {
    // Write Your Code here
    return __builtin_popcount(N);
    //OR
    int count = 0;
    while(N){
        if(N%2)
            count++;
        N/=2;
    }
    return count;
}
