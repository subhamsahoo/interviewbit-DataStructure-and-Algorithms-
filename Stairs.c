/**
 * @input A : Integer
 * 
 * @Output Integer
 */
 
int steps(int n,int *mem)
{
    if(n<0)
    return 0;
    if(n==0||n==1)
    return 1;
    if(mem[n]!=0)
    return mem[n];
    int s1=steps(n-1,mem);
    int s2=steps(n-2,mem);
    mem[n-1]=s1;
    mem[n-2]=s2;
    mem[n]=s1+s2;
    return mem[n];
}
 
int climbStairs(int A) {
    if(A<0)
    return 0;
    if(A==0||A==1)
    return 1;
    int *mem=(int*)calloc(sizeof(int),A+1);
    int result=steps(A,mem);
    return result;
}
