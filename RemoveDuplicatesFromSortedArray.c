/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int removeDuplicates(int* A, int n1) {
    	int i=0,j=i+1;
	while((i<j)&&j<n1)
	{
		if(A[i]==A[j])
		{
			A[j]=INT_MAX;
			j++;
		}
		else if(A[i]!=A[j])
		{
			i=j;
			j++;
		}
	}
	j=0;
	for(i=0;i<n1;i++)
	{
		if(A[i]!=INT_MAX)
			A[j++]=A[i];
	}
	return j;
}
