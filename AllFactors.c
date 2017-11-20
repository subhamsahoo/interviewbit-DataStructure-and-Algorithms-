/**
 * @input A : Integer
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* allFactors(int A, int *length_of_array) {
	// SAMPLE CODE
        /*
         * *length_of_array = 1000; // length of result array
         * int *result = (int *) malloc(*length_of_array * sizeof(int));
         * // DO STUFF HERE. NOTE: length_of_array is inaccurate in this example. 
         * return result;
         */
         if(A<1)
         return NULL;
         
         int i=1,count=0;
         int *result=(int*)malloc(sizeof(int)*1000);
         for(;i<=sqrt(A);i++)
         {
             if(A%i==0)
             result[count++]=i;
         }
         int point=count-1;
         if(A/result[point]!=result[point])
         result[count++]=A/result[point];
         point--;
         for(;point>=0;point--)
         {
             result[count++]=A/result[point];
         }
         *length_of_array=count;
         return result;
         
}
