/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 int maximum(int a,int b)
{
	if(a>=b)
		return a;
	else 
		return b;
}
int maxSubArray(const int* A, int n1) {
    int maxprevios=A[0],max=A[0],current=A[0],i;
for(i=1;i<n1;i++)
{
	current=maximum(A[i],current+A[i]);
	if(max<current)
		max=current;
}
return max;
}
