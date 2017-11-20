/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* convertToTitle(int A) {
	// SAMPLE CODE
	/*
	 * char *result = (char *)malloc(100 * sizeof(char));
	 * // DO STUFF
	 * return result;
	 */
	 int n=A;
	     char *result=(char*)malloc(sizeof(char)*10);
	int count=0;
	while(n>0)
	{
	    	if(n%26==0)
	{
		result[count++]=90;
		int temp=n/26;
		n=temp-1;
	}
	else{
		int temp=n%26;
		result[count++]=temp+64;
		n=n/26;
	}
	}
	result[count]='\0';
	int i=0,j=count-1;
	while(i<j)
	{
		char temp=result[i];
		result[i]=result[j];
		result[j]=temp;
		i++;
		j--;
	}
	return result;
}
