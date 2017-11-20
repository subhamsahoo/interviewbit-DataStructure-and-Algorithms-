/**
 * @input A : Integer
 * 
 * @Output 2D int array. You need to malloc memory. Fill in number_of_rows as row, number_of_columns as columns 
 */
int ** generateMatrix(int A, int *number_of_rows, int *number_of_columns) {
	// SAMPLE CODE
        /*
         * *number_of_rows = A;
         * *number_of_columns = A;
         * int **result = (int **)malloc(A * sizeof(int *));
         * // DO STUFF HERE
         * return result;
         */
         int i;
         *number_of_rows = A;
         *number_of_columns = A;
             int **result = (int **)malloc(A * sizeof(int *));
                for (i=0; i<A; i++)
         result[i] = (int *)malloc(A * sizeof(int));
         int rs=0,re=A-1,cs=0,ce=A-1,dir=1,count=1;
	while(rs<=re && cs<=ce)
	{
		if(dir==1)
		{
			for(i=cs;i<=ce;i++)
				result[rs][i]=count++;
			rs++;
			dir=2;
		}
			else if(dir==2)
		{
			for(i=rs;i<=re;i++)
				result[i][ce]=count++;
			ce--;
			dir=3;
		}
				else if(dir==3)
		{
			for(i=ce;i>=cs;i--)
				result[re][i]=count++;
			re--;
			dir=4;
		}
				else if(dir==4)
		{
			for(i=re;i>=rs;i--)
				result[i][cs]=count++;
			cs++;
			dir=1;
		}
	}
	return result;
}
