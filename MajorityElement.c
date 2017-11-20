/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int majorityElement(const int* A, int n1) {
    int i,num=A[0],count=1;
    for(i=1;i<n1;i++)
    {
        if(A[i]==num)
        count++;
        else
        {
            if(count>0)
            count--;
            else
            {
                num=A[i];
                count=1;
            }
        }
    }
    return num;
}
