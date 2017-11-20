/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int removeElement(int* A, int n1, int B) {
    int i=0,j=0;
	for(i=0;i<n1;i++)
	{
		if(A[i]==B)
			A[i]=INT_MIN;
	}
	for(i=0;i<n1;i++)
	{
		if(A[i]!=INT_MIN)
			A[j++]=A[i];
	}
	return j;
}
