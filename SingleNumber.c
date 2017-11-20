/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int singleNumber(const int* A, int n1) {
    if(n1<1)
    return 0;
    long long result,i;
    result=(long long)A[0];
    for(i=1;i<n1;i++)
    {
        result=result^(long long)A[i];
    }
    return result;
}
