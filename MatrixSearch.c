/**
 * @input A : 2D integer array ' * @input n11 : Integer array's ( A ) rows
 * @input n12 : Integer array's ( A ) columns
 * @input B : Integer
 * 
 * @Output Integer
 */
int searchMatrix(int** A, int n11, int n12, int B) {
    int i;
    
            if(n12==1)
        {
            int left=0,right=n11-1;
            while(left<=right)
	        {
		        int mid=left+(right-left)/2;
		        if(A[mid][0]==B)
			        return 1;
		        else if(A[mid][0]>B)
			        right=mid-1;
		        else
			        left=mid+1;
	        }
	        return 0;
        }
        
    for(i=0;i<n11;i++)
    {
        if(A[i][0]<=B&&A[i][n12-1]>=B)
        {
            int left=0,right=n12-1;
            while(left<=right)
	        {
		        int mid=left+(right-left)/2;
		        if(A[i][mid]==B)
			        return 1;
		        else if(A[i][mid]>B)
			        right=mid-1;
		        else
			        left=mid+1;
	        }
	        return 0;
        }
    }
    return 0;
}
