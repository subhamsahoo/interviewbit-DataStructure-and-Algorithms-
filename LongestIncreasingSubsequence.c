/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int lis(const int* A, int n1) {
    int *a=(int*)malloc(sizeof(int)*n1);
    int i,j;
    for(i=0;i<n1;i++)
    a[i]=1;
    for(i=1;i<n1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(A[i]>A[j]&&a[j]+1>a[i])
            a[i]=a[j]+1;
        }
    }
    int max=a[0];
    for(i=1;i<n1;i++)
    if(a[i]>max)
    max=a[i];
    return max;
}
