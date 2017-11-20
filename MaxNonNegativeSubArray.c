/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in length_of_array
 */
int* maxset(int* A, int n1, int *length_of_array) {
    /*
     * Sample Code : 
     *  *length_of_array = 1;
     *  int * ret = (int *) malloc(sizeof(int) * *length_of_array);
     *  ret[0] = 1;
     *  return ret;
     */
     int i=0,j=0,maxi=INT_MAX,maxj=INT_MAX,maxcount=-1,count=0,new=0,k,*a=A;
     long current=0,maxcurrent=LONG_MIN;
     int check=0;
	for(k=0;k<n1;k++)
	{
		if(a[k]>=0)
		{
			if(new==0)
			{
				i=k;
				j=k;
				new=1;
				check=0;
			}
			current=current+(long)a[k];
			count++;
			j=k;
		}
		if(a[k]<0)
		{
			new=0;
			check=1;
			if(current>maxcurrent)
			{
				maxi=i;
				maxj=j;
				maxcurrent=current;
				maxcount=count;
			}
			if(current==maxcurrent&&count>maxcount)
			{
				maxi=i;
				maxj=j;
				maxcount=count;
			}
				count=0;
				current=0;
		}
	}
	if(check==0)
	{
				if(current>maxcurrent)
			{
				maxi=i;
				maxj=j;
				maxcurrent=current;
				maxcount=count;
			}
				if(current==maxcurrent&&count>maxcount)
			{
				maxi=i;
				maxj=j;
				maxcount=count;
			}
	}
	*length_of_array=maxcount;
	int *res=(int*)malloc(*length_of_array*sizeof(int));
	count=0;
	for(k=maxi;k<=maxj;k++)
	res[count++]=a[k];
	return res;
}
