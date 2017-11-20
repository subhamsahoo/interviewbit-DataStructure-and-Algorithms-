/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void setZeroes(int** A, int n11, int n12) {
    int row1=1,col1=1,i,j;
	for(i=0;i<n12;i++)
	{
		if(A[0][i]==0)
		{
			row1=0;
			break;
		}
	}
		for(i=0;i<n11;i++)
	{
		if(A[i][0]==0)
		{
			col1=0;
			break;
		}
	}
	for(i=1;i<n11;i++)
	{
		for(j=1;j<n12;j++)
		{
			if(A[i][j]==0)
			{
				A[i][0]=0;
				A[0][j]=0;
			}
		}
	}
		for(i=1;i<n11;i++)
	{
		for(j=1;j<n12;j++)
		{
			if(A[i][0]==0||A[0][j]==0)
				A[i][j]=0;
		}
	}
	if(row1==0)
	{
		for(i=0;i<n12;i++)
			A[0][i]=0;
	}
		if(col1==0)
	{
		for(i=0;i<n11;i++)
			A[i][0]=0;
	}
}
