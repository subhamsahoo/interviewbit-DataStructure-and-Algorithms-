/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int longestSubsequenceLength(const int* a, int n1) {
    int *inc=(int*)malloc(sizeof(int)*n1);
    int *dec=(int*)malloc(sizeof(int)*n1);
    int i,j;
    for(i=0;i<n1;i++)
    {
        inc[i]=1;
        dec[i]=1;
    }
    for(i=1;i<n1;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]>a[j]&&(inc[j]+1)>inc[i])
            inc[i]=inc[j]+1;
        }
    }
    for(i=n1-2;i>=0;i--)
    {
        for(j=n1-1;j>i;j--)
        {
            if(a[i]>a[j]&&(dec[j]+1)>dec[i])
            dec[i]=dec[j]+1;            
        }
    }
    int max=0;
    for(i=0;i<n1;i++)
    {
        if((inc[i]+dec[i]-1)>max)
        max=inc[i]+dec[i]-1;
    }
    return max;
}
