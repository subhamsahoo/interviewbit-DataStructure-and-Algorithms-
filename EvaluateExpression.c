/**
 * @input A : array of strings termination by '\0'
 * @input n1 : number of strings in array A
 * 
 * @Output Integer
 */
#define max 1000
 int s[max],top;
 
 void push(int n)
 {
     top++;
     s[top]=n;
 }
 
 int pop()
 {
     int temp=s[top];
     top--;
     return temp;
 }
 
 
int evalRPN(char** A, int n1) {
    int i,j,result=0,top=-1,num=0,sub=0;
    for(i=0;i<n1;i++)
    {
        for(j=0;A[i][j]!='\0';j++)
        {
            if((A[i][j]=='+'||A[i][j]=='-'||A[i][j]=='*'||A[i][j]=='/')&&A[i][1]=='\0')
        {
            if(A[i][0]=='+')
            {
                int op2=pop();
                int op1=pop();
                int res=op1+op2;
                push(res);
            }
            else if(A[i][0]=='-')
            {
                int op2=pop();
                int op1=pop();
                int res=op1-op2;
                push(res);
            }
            else if(A[i][0]=='*')
            {
                int op2=pop();
                int op1=pop();
                int res=op1*op2;
                push(res);
            }
            else if(A[i][0]=='/')
            {
                int op2=pop();
                int op1=pop();
                int res=op1/op2;
                push(res);
            }
            break;
        }
        else if(A[i][j]=='-'){
            sub=1;
        }
        else{
            num=1;
            result=(result*10)+(A[i][j]-48);
        }
        
    }
    if(num==1){
     if(sub==1)
     push(-result);
     else
     push(result);
    }
    sub=0;
    result=0;
    num=0;
    }
    int temp=pop();
    return temp;
}
