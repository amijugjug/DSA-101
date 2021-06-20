int findLongestConseqSubseq(int arr[], int n)
{
  //Your code here
  unordered_map<int,int>mp;
  for(int i=0;i<n;i++)
    mp[arr[i]] = 1;
  int mx=0,cmx=0;
  int mxele = *max_element(arr,arr+n);
  int mnele = *min_element(arr,arr+n);
  for(int i=mnele;i<=mxele;i++){
      if(mp[i] == 1)
        cmx++;
     else
        cmx=0;
     mx = max(mx,cmx);
  }
  return mx;
}