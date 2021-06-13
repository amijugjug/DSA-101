void nextPermutation(vector<int>& nums){
    int i=nums.size()-1;
    int j=nums.size()-1;
    //1.Find the highest index i such that nums[i-1] > nums[i]
    while(i>0 && nums[i]<=nums[i-1])
        i--;
    if(i<=0){
        //If it was last permutation then reverse the array and return
        reverse(nums.begin(),nums.end());
        return;
    }
    //2.Find the highest index j which is less than i-1
    while(nums[j] <= nums[i-1])
        j--;

    //3.Swap j with i
    swap(nums[j],nums[i-1]);
    //4.Reverse the array from i till last.
    reverse(nums.begin()+i,nums.end());

    // next_permutation(nums.begin(),nums.end());
}