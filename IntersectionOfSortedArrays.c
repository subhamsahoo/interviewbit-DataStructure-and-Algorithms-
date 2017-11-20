/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Read only ( DON'T MODIFY ) Integer array
 * @input n2 : Integer array's ( B ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* intersect(const int* A, int n1, const int* B, int n2, int *len1) {
    if(n1==0||n2==0)
    {
        *len1=0;
        return NULL;
    }
    int l;
	if(n1>n2)
		l=n2;
	else
		l=n1;
	int *res=(int*)malloc(sizeof(int)*l);
	int i=0,j=0,count=0;
	while(i<n1&&j<n2)
	{
		if(A[i]==B[j]){
			res[count++]=A[i];
			i++;
			j++;
		}
		else if(A[i]<B[j])
			i++;
		else if(A[i]>B[j])
			j++;
	}
	*len1=count;
	return res;
}
