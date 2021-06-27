bool checkPallindrome(int n){
    int rev = 0;
    int temp = n;
    while(temp){
        rev = rev*10+temp%10;
        temp = temp/10;
    }
    if(rev == n)
        return true;
    return false;
}
int PalinArray(int arr[], int n)
{  //add code here.
    for(int i=0;i<n;i++)
        if(!checkPallindrome(arr[i]))
            return 0;
    return 1;
}