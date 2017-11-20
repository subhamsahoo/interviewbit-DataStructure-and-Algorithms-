/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void sortColors(int* A, int n1) {
    int count0=0,count1=0,count2=0,i;
	for(i=0;i<n1;i++)
	{
		if(A[i]==0)
			count0++;
		else if(A[i]==1)
			count1++;
		else if(A[i]==2)
			count2++;		
	}
	for(i=0;i<n1;i++)
	{
		if(count0>0)
		{
			A[i]=0;
			count0--;
		}
		else if(count1>0)
		{
			A[i]=1;
			count1--;
		}
		else if(count2>0)
		{
			A[i]=2;
			count2--;
		}
	}
}
