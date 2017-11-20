/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
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
				return mid;
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
			return mid;
		else if(a[mid]>min)
			start=mid+1;
		else if(a[mid]<min)
			end=mid-1;
	}
}
int findMin(const int* A, int n1) {
    if(n1==1)
    return 0;
    if(n1==2)
    {
        if(A[0]<A[1])
        return 0;
        else
        return 1;
    }
    if(A[0]<A[n1-1])
    return 0;
    int res=min(A,n1);
    return res;
    
}
int binarysearch(const int *a,int start,int end,int target)
{
	int mid;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(a[mid]==target)
		return mid;
		else if(a[mid]>target)
			end=mid-1;
		else if(a[mid]<target)
			start=mid+1;
	}
	return -1;
}
int search(const int* A, int n1, int B) {
    int res2;
    if(A[0]<A[n1-1])
    {
        res2=binarysearch(A,0,n1-1,B);
        return res2;
    }
    int res=findMin(A,n1);
	if(B>=A[res]&&B<=A[n1-1])
		res2=binarysearch(A,res,n1-1,B);
	else
		res2=binarysearch(A,0,res-1,B);
	return res2;
}
