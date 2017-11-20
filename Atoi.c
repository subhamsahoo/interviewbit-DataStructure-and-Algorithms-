/**
 * @input A : Read only ( DON'T MODIFY ) String termination by '\0'
 * 
 * @Output Integer
 */
int matoi(const char* A) {
    
	int res=0,sub=0,i,found=0;
	for(i=0;A[i]!='\0';i++)
	{
		
		int temp=A[i];
		//printf("tf%d %d\n",temp,found);
			if(A[i]==' '&&found==1||A[i]=='-'&&found==1||A[i]=='+'&&found==1)
		{
			if(sub==1)
			return -res;
		else 
		return res;
		}
		else if(temp==45&&res==0)
		{
			sub=1;
			int temp2=A[i+1];
			if(!(temp2>=48&&temp2<=57))
				return res;
		}
		else if(A[i]=='+'&&res==0)
		{
			int temp2=A[i+1];
			if(!(temp2>=48&&temp2<=57))
				return res;
		}			

		else if(A[i]==' '&&res==0);
		else if(temp>=48&&temp<=57)
		{
			found=1;
			temp=temp-48;
			long long res2;
			if((res2=(long long)res*10+temp)>=INT_MAX)
			{
				if(sub==1)
					return INT_MIN;
				return INT_MAX;
			}
			res=res*10+temp;
		}
		else {
			if(sub==1)
		return -res;
	else 
	return res;
		}
	}
		if(sub==1)
		return -res;
	else 
	return res;
}
