/**
 * @input A : String termination by '\0'
 * 
 * @Output Void. Just modifies the args passed by reference 
 */
void reverseWords(char* A) {
    	char *c=A;
    	int j=0,i,space=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]!=' ')
		{
			c[j++]=c[i];
			if(c[i+1]==' ')
				c[j++]=' ';
		}
	}
	if(c[j-1]==' '){
	c[j-1]='\0';
	j--;
	}
	else c[j]='\0';
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{	space=1;break;
		}
		
	}
	if(space==0);
	else {
	int temp=j;
	j--;
	i=0;
	while(i<j)
	{
		char temp2=c[i];
		c[i]=c[j];
		c[j]=temp2;
		i++;
		j--;
	}
	c[temp]=' ';
	c[temp+1]='\0';
	int k;
	j=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]==' ')
		{
			k=i-1;
			while(j<k)
			{
			char temp2=c[j];
			c[j]=c[k];
			c[k]=temp2;
			j++;
			k--;
			}
			j=i+1;
		}
	}
	c[temp]='\0';
	}
}
