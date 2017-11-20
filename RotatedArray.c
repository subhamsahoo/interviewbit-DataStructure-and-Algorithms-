/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 int min(const int *a,int length)
{
	int start=0,end=length-1,min=a[0],mid;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]>min)
			start=mid+1;
		if(a[mid]<min)
		{
			if(a[mid-1]>a[mid]){
				return a[mid];
			}
			min=a[mid];
			end=mid-1;
			break;
		}
	}
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid-1]>a[mid])
			return a[mid];
		else if(a[mid]>min)
			start=mid+1;
		else if(a[mid]<min)
			end=mid-1;
	}
}
int findMin(const int* A, int n1) {
    if(n1==1)
    return A[0];
    if(n1==2)
    {
        if(A[0]<A[1])
        return A[0];
        else
        return A[1];
    }
    if(A[0]<A[n1-1])
    return A[0];
    int res=min(A,n1);
    return res;
    
}
