/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int trailingZeroes(int A) {
        int result=0,div=5,ans;
    do{
        ans=A/div;
        result=result+ans;
        div=div*5;
    }while(ans>0);
    return result;
}
