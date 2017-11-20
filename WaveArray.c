/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1),j;
    for (j = low; j <= high- 1; j++)
    {
              if (arr[j] <= pivot)
        {
            i++;    
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
         int pi = partition(arr, low, high);
       quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
int* wave(int* A, int n1, int *len1) {
        *len1=n1;
        int i;
        quickSort(A,0,n1-1);
        for(i=1;i<n1;i=i+2)
	{
		if(A[i]>A[i-1]||(A[i]>A[i+1]&&(i+1)<n1))
		{
			if((A[i+1]<A[i-1])&&((i+1)<n1))
			    swap(&A[i],&A[i+1]);
			else
			    swap(&A[i-1],&A[i]);
		}
	}
	return A;

}
