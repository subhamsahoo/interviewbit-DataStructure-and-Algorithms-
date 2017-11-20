/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Return Returns a array of size n1 + n2 with A and B merged. 
 */
int* merge(int* A, int n1, int* B, int n2) {
    	if(n2<=0)
		return A;
	if(n1<=0)
		return B;
	if(n1<=0&&n2<=0)
		return NULL;
	int i=0,j=0,*c=(int*)malloc(sizeof(int)*(n1+n2)),count=0;
	int *a=A,*b=B;
	while(i<n1&&j<n2)
	{
		if(a[i]<=b[j])
		{
			c[count++]=a[i];
			i++;
		}
		else if(b[j]<a[i])
		{
			c[count++]=b[j];
			j++;
		}
	}
	while(i<n1&&j>=n2){
		c[count++]=a[i];
		i++;
	}
	while(j<n2&&i>=n1){
		c[count++]=b[j];
		j++;
	}
	return c;
}
