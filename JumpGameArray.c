/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 
int check(int* a,int start,int n,int* arr)
{
    if(start>=n)
    return 0;
    if(arr[start]!=-1)
    return arr[start];
    if(start==n-1){
    arr[start]=1;
    return 1;}
    if(a[start]==0){
    arr[start]=0;
    return 0;
    }

    int A=0,i;
    for(i=a[start];i>=1;i--)
    {
     int r=check(a,start+i,n,arr);
        A=A||r;
        arr[start]=A;
        if(A==1)
        {
        arr[start]=1;
        return 1;
        }
    }
}
 
int canJump(int* A, int n1) {
    int i,j;
    int *arr=(int*)malloc((n1+1)*sizeof(int));
    for(i=0;i<=n1;i++)
    arr[i]=-1;
    int result=check(A,0,n1,arr);
    return result;
}
