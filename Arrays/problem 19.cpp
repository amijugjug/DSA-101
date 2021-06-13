
// V[i][0] => starting of interval
// V[i][1] => ending of interval

//Merge overlapping intervals
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    sort(intervals.begin(),intervals.end());
    vector<vector<int>>op;
    vector<int>put;
    for(int i=0;i<n-1;i++){
    	if(intervals[i+1][0] < intervals[i][1]){
    		intervals[i+1][0] = min(intervals[i][0],intervals[i+1][0]);
    		intervals[i+1][1] = max(intervals[i][1],intervals[i+1][1]);
    	}
    	else
    		op.push_back(intervals[i]);
    }
    op.push_back(intervals[n-1]);
    return op;
}


//Code to insert an interval then merge it
vector<vector<int>> mergeNinsert(vector<vector<int>> v,vector<int>i){
	vector<std::vector<int>>op;
	int s=i[0][0],e=i[0][1];
	int n = v.size();
	for(int i=0;i<n;i++){
		if(v[i][1] < s)
			op.push_back(v[i]);
		else if(v[i][0] > e){
			if(!check)
				op.push_back({s,e});
			op.push_back(v[i]);
			check = true;
		}
		else{
			s = min(s,v[i][0]);
			e = max(e,v[i][1]);
		}
	}
	if(!check)
		op.push_back({s,e});
	return op;
}