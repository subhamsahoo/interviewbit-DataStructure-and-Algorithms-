/**
 * @input A : Read only ( DON'T MODIFY ) 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* spiralOrder(const int** A, int n11, int n12, int *length_of_array) {
	 *length_of_array = n11 * n12; // length of result array
	 int *result = (int *) malloc(*length_of_array * sizeof(int));
	 // DO STUFF HERE
	int rs=0,re=n11-1,cs=0,ce=n12-1,dir=1,j=0,i1,i2,i3,i4;
	while(rs<=re && cs<=ce)
	{
		if(dir==1)
		{
			for(i1=cs;i1<=ce;i1++)
			{
				result[j++]=A[rs][i1];
			}
			rs++;
			dir=2;
		}
			else if(dir==2)
		{
			for(i2=rs;i2<=re;i2++)
			{
				result[j++]=A[i2][ce];
			}
			ce--;
			dir=3;
		}
			else if(dir==3)
		{
			for(i3=ce;i3>=cs;i3--)
			{
				result[j++]=A[re][i3];
			}
			re--;
			dir=4;
		}
				else if(dir==4)
		{
			for(i4=re;i4>=rs;i4--)
			{
				result[j++]=A[i4][cs];
			}
			cs++;
			dir=1;
		}
	}
	 return result;
}
