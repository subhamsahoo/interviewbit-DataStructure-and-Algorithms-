/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer
 */
int diffPossible(int* A, int n1, int B) {
   
    if(n1<2)
    return 0;
    if(n1==2)
    {
        if(abs(A[0]-A[1])==B)
        return 1;
        return 0;
    }
    int *a=A,n=n1,k=B;
    int i=0,j=1;
	while(j!=n)
	{
		int temp=abs(a[i]-a[j]);
		if(temp==k)
			return 1;
		else if(temp>k)
			i++;
		else j++;
		if(i==j)
			j++;
	}
	return 0;
}
