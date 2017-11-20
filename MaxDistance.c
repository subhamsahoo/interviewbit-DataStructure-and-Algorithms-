/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
int max(int a,int b)
{
	int maximum=(a>b)?a:b;
	return maximum;
}
int min(int a,int b)
{
	int minimum=(a<b)?a:b;
	return minimum;
}

 
int maximumGap(const int* A, int n1) {
        if(n1==1)
		return 0;
	if(A[0]<=A[n1-1]&&n1>1)
		return n1-1;
	int *low=(int*)malloc(sizeof(int)*n1);
	int *high=(int*)malloc(sizeof(int)*n1),i,j;
	low[0]=A[0];
	for(i=1;i<n1;i++)
	{
		low[i]=min(A[i],low[i-1]);
	}
	high[n1-1]=A[n1-1];
	for(j=n1-2;j>=0;j--)
	{
		high[j]=max(high[j+1],A[j]);
	}
	int maxgap=-1;
	i=0,j=0;
	while(i<n1&&j<n1)
	{
		if(low[i]<=high[j])
		{
			maxgap=max(maxgap,j-i);
			j++;
		}
		else
			i++;
	}
	return maxgap;

    
}

