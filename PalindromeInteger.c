/**
 * @input A : Integer
 * 
 * @Output Integer 0 / 1. Return 0 if the number is not palindrome, else return 1
 */
int isPalindrome(int A) {
    int temp=A,rev=0;
    while(A>0)
    {
        rev=rev*10+(A%10);
        A=A/10;
    }
    if(rev==temp)
    return 1;
    return 0;
}

