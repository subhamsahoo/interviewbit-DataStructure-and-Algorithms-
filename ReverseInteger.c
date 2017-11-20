/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int reverse(int A) {
    int sub;
    sub=(A>0)?0:1;
    if(sub==1)
    A=-A;
    long long rev=0;
        while(A>0)
    {
        rev=rev*10+(A%10);
        if(rev>INT_MAX)
        return 0;
        A=A/10;
    }
    if(sub==1)
    return -(int)rev;
    return (int)rev;
}
