/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * 
 * @Output Integer array. You need to malloc memory, and fill the length in len1
 */
 #define max 1000000
 int top,arr[max];
 void push(int n)
 {
     top++;
     arr[top]=n;
 }
 void pop()
 {
     top--;
 }
int* prevSmaller(int* A, int n1, int *len1) {
    top=-1;
    int *result=(int*)malloc(sizeof(int)*n1),i;*len1=n1;
    for(i=0;i<n1;i++)
    {
        while(top!=-1&&arr[top]>=A[i])
        pop();
        if(top==-1)
        result[i]=-1;
        else
        result[i]=arr[top];
        push(A[i]);
    }
    return result;
}