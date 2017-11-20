/**
 * @input A : String termination by '\0'
 * @input B : String termination by '\0'
 * 
 * @Output string. Make sure the string ends with null character
 */
char* addBinary(char* A, char* B) {
    char *a=A,*b=B;
    	int i,j,length=0,temp1,temp2,temp3,sum;
	char c='0';
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++);
	if(i>=j)
		length=i;
	else length=j;
	char *res=(char*)malloc(sizeof(char)*(length+2));
	res[length+1]='\0';
	i--;
	j--;
	while(i>=0&&j>=0)
	{
		temp1=a[i]-48;
		temp2=b[j]-48;
		temp3=c-48;
		sum=temp1+temp2+temp3;
		if(sum==0)
		{
			res[length--]='0';
			c='0';
		}
		else if(sum==1)
		{
			res[length--]='1';
			c='0';
		}
		else if(sum==2)
		{
			res[length--]='0';
			c='1';
		}
		else if(sum==3)
		{
			res[length--]='1';
			c='1';
		}
		i--;j--;
	}
	while(i>=0&&j<0)
	{
		temp1=a[i]-48;
		temp2=c-48;
		sum=temp1+temp2;
			if(sum==0)
		{
			res[length--]='0';
			c='0';
		}
		else if(sum==1)
		{
			res[length--]='1';
			c='0';
		}
		else if(sum==2)
		{
			res[length--]='0';
			c='1';
		}
		i--;
	}
	while(j>=0&&i<0)
	{
		temp1=b[j]-48;
		temp2=c-48;
		sum=temp1+temp2;
			if(sum==0)
		{
			res[length--]='0';
			c='0';
		}
		else if(sum==1)
		{
			res[length--]='1';
			c='0';
		}
		else if(sum==2)
		{
			res[length--]='0';
			c='1';
		}
		j--;
	}
	res[0]=c;
	j=0;
	if(res[0]=='0')
	{
		for(i=1;res[i]!='\0';i++)
			res[j++]=res[i];
	}
	if(c=='0')
	res[j]='\0';
	return res;
}
