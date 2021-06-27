//In this problem we are going to find the median between two arrays.
//Assumption is array is always sorted and of equal length.
int find_median(int *v,int n)
{
    if(n%2 == 1)
        return v[n/2];
    else
        return (v[n/2] + v[(n/2)-1])/2;
}
int calcMedian(int *ar1,int *ar2,int n){
	int m1 = find_median(ar1,n);
	int m2 = find_median(ar2,n);
	if(m1==m2)
		return m1;
	if(n == 2)
		return (max(ar1[0],ar2[0]) + min(ar1[1],ar2[1]))/2;
	if(m1>m2){
		//Then median exist in ar1[1...n/2] and ar2[n/2...n]
		int size = (n/2);
		if(n%2==0)
			return calcMedian(ar1,ar2+n/2,size+1);
		else
			return calcMedian(ar1,ar2+n/2;size);
	}
	if(m1<m2){
		//Then median exist in ar1[n/2...n] and ar2[1..n/2]
		int size = n-(n/2);
		if(n%2==0)
			return calcMedian(ar1+n/2,ar2,size+1);
		else
			return calcMedian(ar1+n/2,ar2;size);
	}
}