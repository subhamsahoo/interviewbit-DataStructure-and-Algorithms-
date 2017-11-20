/**
 * @input A : String termination by '\0'
 * @input B : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* convert(char* A, int B) {
    if(B==1)
    return A;
    	int length=0,i;
	for(i=0;A[i]!='\0';i++)
		length++;
	char *result=(char*)malloc(sizeof(char)*(length+1));
	int index=0,level=1,current=1,up=0,down=0;
	while(current<=length)
	{
		result[index++]=A[current-1];
		current=current+((B-1)*2);
	}
	for(i=2;i<B;i++)
	{
		current=i;
		up=(B-i)*2;
		down=(i-1)*2;
		int alt=0;
			while(current<=length)
				{
					result[index++]=A[current-1];
					if(alt==0)
					current=current+up;
					else
						current=current+down;
					alt=!alt;
				}
	}
	current=B;
	while(current<=length)
	{
		result[index++]=A[current-1];
		current=current+((B-1)*2);
	}
	result[index]='\0';
	return result;
}
