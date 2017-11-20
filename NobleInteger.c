/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer
 */
 int partition(int *a,int l,int h)
{
	int x=a[h],i=l-1,j;
	for(j=l;j<h;j++)
	{
		if(a[j]<=x)
		{
			i++;
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	int temp=a[i+1];
	a[i+1]=a[h];
	a[h]=temp;
	return i+1;
}
void quicksort(int* a,int l,int h)
{
	if(l<h)
	{
		int p=partition(a,l,h);
		quicksort(a,l,p-1);
		quicksort(a,p+1,h);
	}
}
 
int solve(int* A, int n1) {
    quicksort(A,0,n1-1);
    	int i,result,*a=A;
	for(i=0;i<n1;i++)
	{
	    if(i==n1-1)
	    {
	        if(a[i]==0)
	        return 1;
	        return -1;
	    }
			while(1)
			{
				if(a[i]==a[i+1])
					i++;
				else if(i==n1-1)
				{
				    	if(a[i]==0)
	                    return 1;
	                    return -1;
				}
				else
					break;
			}
			result=n1-i-1;
			if(result==(a[i]))
				return 1;
			if(result<(a[i]))
				return -1;
	}
}
