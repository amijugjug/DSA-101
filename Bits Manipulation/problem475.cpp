int countSetBits(int n)
{
    // Your logic here
    if(n==0)
        return 0;
    //To find the nearest 2th power : if n==10 nearest 2th power = 8 == 2^3 so c = 3;
    int c = log2(n);
    //To find the count of set bits in 2^x : if n==10 set bits count till 8 = 12
    int b = pow(2,c-1)*c;
    //To find the count of set bits in n-2^x : if n==10 remaing set bits will be 11-setbitstill8+1
    int a = n-pow(2,c)+1;
    //To find the remaining part
    int remaining = n - pow(2,c);
    return b+a+countSetBits(remaining);
}