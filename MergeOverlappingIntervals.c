/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 * };
 *
 * typedef struct Interval interval;
 */
/*
 * intervals : the array of interval
 * sz : number of entries in intervals
 * len : populate the length of returned array of intervals in len
 */
int partition(interval *stud, int l, int h)
{
	int x = stud[h].start;
	int i = (l - 1),j;

	for ( j = l; j <= h - 1; j++)
	{
		if (stud[j].start <= x)
		{
			i++;
			interval temp = stud[j];
			stud[j] = stud[i];
			stud[i] = temp;
		}
	}
	interval temp = stud[i + 1];
	stud[i + 1] = stud[h];
	stud[h] = temp;
	return (i + 1);
}

 
void quickSort(interval *stud, int l, int h)
{
    if (l < h)
    {
        		int p = partition(stud, l, h);
		quickSort(stud, l, p - 1);
		quickSort(stud, p + 1, h);
	}
}

interval* merge(interval *intervals, int sz, int *len) {
    quickSort(intervals, 0, sz - 1);
    interval *result=(interval*)malloc(sizeof(interval)*sz),*a=intervals;
	int count=0,i;
	result[count].start=a[0].start;
	result[count].end=a[0].end;
	count++;
	for(i=1;i<sz;i++)
	{
		//printf("%d %d %d %d\n",result[count-1].start,result[count-1].end,a[i].start,a[i].end);
		if((result[count-1].start==a[i].start)&&(result[count-1].end==a[i].end));
		else if(result[count-1].end<a[i].start)
		{
			result[count].start=a[i].start;
			result[count].end=a[i].end;
			count++;
		}
		else
		{
			int mins,maxe;
			if(result[count-1].start<=a[i].start)
				mins=result[count-1].start;
			else
				mins=a[i].start;
			if(result[count-1].end>=a[i].end)
				maxe=result[count-1].end;
			else
				maxe=a[i].end;
			result[count-1].start=mins;
			result[count-1].end=maxe;
		}
		if(count>1)
		{
			if((result[count-2].start==result[count-1].start)&&(result[count-2].end==result[count-1].end)){count--;}
			else if(result[count-2].end<result[count-1].start);
			else
			{
				int mins,maxe;
			if(result[count-2].start<=result[count-1].start)
				mins=result[count-2].start;
			else
				mins=result[count-1].start;
			if(result[count-2].end>=result[count-1].end)
				maxe=result[count-2].end;
			else
				maxe=result[count-1].end;
			result[count-2].start=mins;
			result[count-2].end=maxe;
			count--;
			}
		}
	}
	*len=count;
	return result;
}
