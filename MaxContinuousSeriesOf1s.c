/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
int* maxone(int* A, int n1, int B, int *len1) {
    int *a=A,n=n1,b=B;
    	int flip=b,start=-1,maxs,maxe,len=0,i;
	int first0=-1,second0=-1,currentlength=0;
	if(flip==0)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				if(start==-1)
					start=i;
				currentlength++;
			}
			if(a[i]==0)
			{
				if(currentlength>len)
				{
					len=currentlength;
					maxs=start;
					maxe=i-1;
				}
				start=-1;
				currentlength=0;
			}
		}
				if(currentlength>len)
				{
					len=currentlength;
					maxs=start;
					maxe=n-1;
				}
	    int *result=(int*)malloc(sizeof(int)*len);
	    for(i=0;i<len;i++)
	        result[i]=maxs++;
	   *len1=len;
		return result;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==1)
		{
			if(start==-1)
				start=i;
			currentlength++;
		}
		if(a[i]==0)
		{
			if(first0==-1||second0==-1)
			{
				if(first0==-1)
					first0=i;
				else
					second0=i;
			}
			if(flip>0)
			{
				if(start==-1)
					start=i;
				currentlength++;
				flip--;
			}
			else if(flip<=0)
			{
				if(currentlength>len)
				{
					len=currentlength;
					maxs=start;
					maxe=i-1;
				}
				start=first0+1;
				first0=second0;
				second0=-1;
				int k;
				for(k=first0+1;k<=i;k++){
					if(a[k]==0){
						second0=k;
					    break;}
					}
				currentlength=i-start+1;
			}
		}		
	}
	if(currentlength>len)
				{
					len=currentlength;
					maxs=start;
					maxe=n-1;
				}
	    int *result=(int*)malloc(sizeof(int)*len);
	    for(i=0;i<len;i++)
	        result[i]=maxs++;
	   *len1=len;
		return result;
}
