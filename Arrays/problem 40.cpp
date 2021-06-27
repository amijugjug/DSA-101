int find_median(vector<int> v)
{
    // Code here.
    sort(v.begin(),v.end());
    if(v.size()%2 == 1)
        return v[v.size()/2];
    else
        return (v[v.size()/2] + v[(v.size()/2)-1])/2;
}