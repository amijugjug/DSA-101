void threeWayPartition(vector<int>& A,int a, int b)
    {
    //variation of dutch national flag problem

    int low=0,mid=0,high=A.size()-1;
    //low indicates less than a,mid indicates between a and b,high indicates
    //greater than b;
    
        while(mid <= high)
        {
            if(A[mid] < a)
            {
                swap(A[mid],A[low]);
                low++;
                mid++;
            }
            else if(A[mid] > b)
            {
                swap(A[mid],A[high]);
                high--;
            }
            else
                mid++;
        }
    }