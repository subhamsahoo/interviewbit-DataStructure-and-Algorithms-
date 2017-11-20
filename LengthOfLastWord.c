/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int lengthOfLastWord(const char* A) {
    int count=0,i,prev=0;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' '){
			if(count!=0)
			prev=count;
        count=0;
		}
        else count++;
    }
	if(count==0)
		return prev;
    return count;
}
