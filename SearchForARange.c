/**
 * @input A : Read only ( DON'T MODIFY ) Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 int search(const int* a,int length,int target,int side)
 {
     int start=0,end=length-1,mid,result=-1;
     while(start<=end)
     {
         mid=start+(end-start)/2;
         if(a[mid]==target)
         {
             result=mid;
             if(side==-1)
             end=mid-1;
             else
             start=mid+1;
         }
         else if(a[mid]<target)
         start=mid+1;
         else if(a[mid]>target)
         end=mid-1;
     }
     return result;
     
 }
int* searchRange(const int* A, int n1, int B, int *len1) {
    *len1=2;
    int *result=(int*)malloc(sizeof(int)*2);
    int leftbound=search(A,n1,B,-1);
    if(leftbound==-1)
    {
        result[0]=-1;
        result[1]=-1;
        return result;
    }
    int rightbound=search(A,n1,B,1);
    result[0]=leftbound;
    result[1]=rightbound;
    return result;
}
