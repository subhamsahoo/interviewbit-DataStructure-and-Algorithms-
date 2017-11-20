/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int isPrime(int A) {
    if(A<=1)
    return 0;
    int i=2;
    for(;i<=sqrt(A);i++)
    if(A%i==0)
    return 0;
    return 1;
}
