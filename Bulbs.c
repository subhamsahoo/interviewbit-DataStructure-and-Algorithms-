/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int bulbs(int* A, int n1) {
    int i,result=0;
    for(i=0;i<n1;i++)
    {
        if(result%2==0)
        {
            if(A[i]==0)
            result++;
        }
        else
        {
            if(A[i]==1)
            result++;
        }
    }
    return result;
}
