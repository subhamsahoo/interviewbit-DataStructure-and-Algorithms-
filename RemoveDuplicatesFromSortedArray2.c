/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int removeDuplicates(int* A, int n1) {
    	int j,i;
	for(i=0;i<n1;i=j)
	{
		j=i+1;
		if(A[i]==A[j]&&j<n1)
		{
			j++;
		}
		while(A[i]==A[j]&&j<n1)
		{
			A[j]=INT_MIN;
			j++;
		}
	}
	j=0;
	for(i=0;i<n1;i++)
	{
		if(A[i]!=INT_MIN)
			A[j++]=A[i];
	}
	return j;
}
