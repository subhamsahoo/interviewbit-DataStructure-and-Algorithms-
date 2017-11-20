/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* findDigitsInBinary(int A) {
	// SAMPLE CODE
	/*
	 * char* result = (char *)malloc(100 * sizeof(char));
	 * // DO STUFF HERE
	 * return result; 
	 */
	// printf("Hello\n");
	if(A==0)
	{
	    char *result=(char*)malloc(sizeof(char)*2);
	    result[0]='0';
	    result[1]='\0';
	    return result;
	}
	 char *result=(char*)malloc(sizeof(char)*100);
	 int count=0;
	 while(A>0)
	 {
	     result[count++]=(char)(A%2)+48;
	     A=A/2;
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
