/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int isPalindrome(char* A) {
    	int i=0,j=0;
	for(i=0;A[i]!='\0';i++)
	{
		int c=A[i];
		if(c>=48&&c<=57||c>=65&&c<=90||c>=97&&c<=122)
		{
			A[j++]=c;
		}
	}
	A[j]='\0';
	j=j-1;
	i=0;
	while(i<j)
	{
		int a=A[i],b=A[j];
		if(a==b||a+32==b||a==b+32);
		else return 0;
		i++;j--;
	}
	return 1;
}
