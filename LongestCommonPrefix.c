/**
 * @input A : array of strings termination by '\0'
 * @input n1 : number of strings in array A
 * 
 * @Output string. Make sure the string is '\0' terminated.
 */
char* longestCommonPrefix(char** A, int n1) {
    int i=0,j=0,no=0,k;
    while(A[i][j]!='\0')
    {
        for(k=0;k<n1;k++)
        {
            if(A[i][j]!=A[k][j])
            {
            no=1;
            break;
            }
        }
        if(no==1)
        break;
        j++;
    }
    A[i][j]='\0';
    return A[0];
    
}
