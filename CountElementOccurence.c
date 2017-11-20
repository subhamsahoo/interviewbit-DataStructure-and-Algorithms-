/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
 int search(const int* a,int length,int x)
{
	int start=0,end=length-1;
	while(start<=end)
	{
		int mid=start+(end-start)/2;
		if(a[mid]==x)
			return mid;
		else if(x<a[mid])
			end=mid-1;
		else if(x>a[mid])
			start=mid+1;
	}
	return -1;
}
int findCount(const int* A, int n1, int B) {
    int res=search(A,n1,B);
    if(res==-1)
    return 0;
	int count=1,i;
	i=res-1;
	while(i>=0)
	{
		if(A[i]==B){
			count++;
			i--;
		}
		else break;
	}
	i=res+1;
	while(i<n1)
	{
			if(A[i]==B){
			count++;
			i++;
		}
		else break;
	}
	return count;
}
