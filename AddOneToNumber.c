/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* plusOne(int* A, int n1, int *length_of_array) {
	// SAMPLE CODE
        /*
         * *length_of_array = n1 + 1; // length of result array
         * int *result = (int *) malloc(*length_of_array * sizeof(int));
         * // DO STUFF HERE. NOTE : length_of_array can be n1 OR n1 + 1. 
         * return result;
         */
         	int j,k;
	for(j=0;j<n1;j++)
	{
		if(A[j]!=0)
			break;
	}
	if(j!=0)
	{
		n1=n1-j;
		for(k=0;k<n1;k++)
		{
			A[k]=A[j++];
		}
	}
	int inc=1,n2=n1,i;
	for(i=0;i<n1;i++)
	{
		if(A[i]!=9)
		{
			inc=0;
			break;
		}
	}
	if(inc==1)
	{
		n2=n2+1;
	}
	int rem=0;
	int *result = (int *) malloc(n2 * sizeof(int));
	*length_of_array=n2;
	for(i=n1-1;i>-1;i--)
	{
		if(i==n1-1)
		{
		
			result[n2-1]=A[i]+1;
			if(result[n2-1]>9)
			{
				result[n2-1]=0;
				rem=1;
			}
		}
		else{
			result[n2-1]=A[i]+rem;
			if(result[n2-1]>9)
			{
				result[n2-1]=0;
				rem=1;
			}
				else
					rem=0;
	}	
	n2=n2-1;
	}
	if(inc==1)
		result[0]=1;
	
	return result;
}
