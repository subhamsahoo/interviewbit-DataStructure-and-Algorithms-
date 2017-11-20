/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int titleToNumber(char* A) {
    int result=0,i;
    for(i=0;A[i]!='\0';i++);
    i=i-1;
    if(i>=0)
    result=(int)A[i]-64;
    i--;
    int mul=26;
    while(i>=0)
    {
        result=result+((int)A[i]-64)*mul;
        mul=mul*26;
        i--;
    }
    
    return result;
}
