bool subArrayExists(int arr[], int n)
{
    //Your code here
    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(s.find(sum) != s.end())
            return true;
        s.insert(sum);
    }
    return false;
}
