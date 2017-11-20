/**
 * @input A : Integer
 * 
 * @Output Integer array. You need to malloc memory for result array, and fill result's length in length_of_array
 */
int* sieve(int A, int *length_of_array) {
	// SAMPLE CODE
        /*
         * *length_of_array = A; // length of result array
         * int *result = (int *) malloc(*length_of_array * sizeof(int));
         * // DO STUFF HERE. NOTE : length_of_array is inaccurate here. 
         * return result;
         */
         if(A<2)
         {
            *length_of_array=0;
            return NULL;
         }
         int *result=(int*)calloc(sizeof(int),A+1);
         result[0]=result[1]=1;
         int i=2;
         for(;i<=sqrt(A);i++)
         {
             int mul=2;
             for(;i*mul<=A;mul++)
             {
                 result[i*mul]=1;
             }
         }
         int count=0;
         for(i=2;i<=A;i++)
         {
             if(result[i]==0)
             {
                 result[count++]=i;
             }
         }
         *length_of_array=count;
         return result;
}
