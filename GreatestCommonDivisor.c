/**
 * @input A : Integer
 * @input B : Integer
 * 
 * @Output Integer
 */
int gcd(int A, int B) {
    if(A>0&&B>0){
    int a=A>B?A:B;
    int b=A<B?A:B,rem=-1;
    while(rem!=0)
    {
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;}
    return A>B?A:B;
}