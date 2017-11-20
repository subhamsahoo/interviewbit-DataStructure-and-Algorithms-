/**
 * @input A : Integer
 * 
 * @Output Integer
 */
unsigned int reverse(unsigned int A) {
    int n= sizeof(A)* 8;
    int i=0, j= n-1;

    while(i < j){
        int rightbit= (A>>i) & 1;
        int leftbit= (A>>j) & 1;
        if(rightbit != leftbit){
            A ^= ((1u<<j) | (1u<<i));
        }
        i++, j--;
    }

    return A;
}
