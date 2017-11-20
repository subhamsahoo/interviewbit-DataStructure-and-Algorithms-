/**
 * @input A : 2D integer array 
 * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
 void swap(int *num1,int *num2)
{
	int temp=*num1;
	*num1=*num2;
	*num2=temp;
}
void rotate(int** A, int n11, int n12) {
    int row,col;
    for(row=0;row<n11;row++)
	{
		for(col=0;col<n12;col++)
		{
			if(row<col)
				swap(&A[row][col],&A[col][row]);
		}
	}
	int left=0,right=n12-1;
	while(left<right)
	{
		for(row=0;row<n11;row++)
			swap(&A[row][left],&A[row][right]);
		left++;
		right--;
	}
}
