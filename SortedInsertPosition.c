/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int searchInsert(int* A, int n1, int B) {
    	int start=0,end=n1-1,mid;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		if(A[mid]==B)
			return mid;
		else if(A[mid]>B&&A[mid-1]<B)
			return mid;
		else if(A[mid]<B)
			start=mid+1;
		else if (A[mid]>B)
			end=mid-1;
	}
}
