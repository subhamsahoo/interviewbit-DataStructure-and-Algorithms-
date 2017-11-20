/**
 * @input A : Integer
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* getRow(int A, int *length_of_array) {
	// SAMPLE CODE
        /*
         * *length_of_array = A; // length of result array
         * int *result = (int *) malloc(*length_of_array * sizeof(int));
         * // DO STUFF HERE
         * return result;
         */
         *length_of_array = A;
         int *result = (int *) malloc(*length_of_array * sizeof(int));
         	int prev=1,count=1,row=A+1,k,i=0;	
		for(k=1;k<=A+1;k++)
		{
			if(k==1)
				printf("1 ");
			else{
				prev=prev*(row-1)/count++;
				result[i++]=prev;
				row--;
			}
			
		}
		return result;
}
