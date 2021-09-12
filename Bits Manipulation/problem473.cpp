vector<int> singleNumber(vector<int> nums) 
{
    int ans = nums[0];
    int n = nums.size();
    for(int i=1;i<n;i++)
        ans^=nums[i];
    
    //Finding position of first set bit 
    int m = ans & ~(ans-1);

    //Divide the array in such a way that the  umbers having mth bit=1 comes in a and mth bit = 0 comes in b
    int a=0,b=0;
    for(int i=0;i<n;i++){
        if(nums[i] & m)
            a^=nums[i];
        else
            b^=nums[i];
    }
    
    vector<int>v;
    //Used min and max because in op they want small nmber to be displayed first
    v.emplace_back(min(a,b));
    v.emplace_back(max(a,b));
    return v;
}