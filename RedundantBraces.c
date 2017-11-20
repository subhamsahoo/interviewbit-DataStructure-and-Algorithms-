/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
#define max 1000
 char s[max];
 int top;
 void push(char a)
 {
     top++;
     s[top]=a;
 }
 char pop()
 {
     char temp=s[top];
     top--;
     return temp;
 }
int braces(char* A) {
    top=-1;
    int i;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==')')
        {
            int red=0;
            char result;
            do
            {
                result=pop();
                if(result=='+'||result=='-'||result=='*'||result=='/')
                red=1;
            }while(result!='(');
            if(red==0)
            return 1;
        }
        else 
        push(A[i]);
    }
    return 0;
}
