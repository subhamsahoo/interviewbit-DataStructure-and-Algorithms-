/**
 * @input A : Integer
 * 
 * @Output string. Make sure the string ends with null character
 */
char* intToRoman(int A) {
    	int mul=1,count=0,prev=0,i,j,num=A;
	char *res=(char*)malloc(sizeof(char)*20);
	while(num>0)
	{
		int temp=num%10;
		temp=temp*mul;
		if(temp>=1&&temp<=9)
		{
			if(temp==4)
			{
				res[count++]='I';
				res[count++]='V';
			}
			else if(temp==5)
			{
				res[count++]='V';
			}
			else if(temp==9)
			{
				res[count++]='I';
				res[count++]='X';
			}
			else 
			{
				if(temp>5)
				{
					res[count++]='V';
					temp=temp-5;
				}
				while(temp>0)
				{
					res[count++]='I';
					temp--;
				}
			}
		}
		else if(temp>=10&&temp<=90)
		{
			if(temp==40)
			{
				res[count++]='X';
				res[count++]='L';
			}
			else if(temp==50)
			{
				res[count++]='L';
			}
			else if(temp==90)
			{
				res[count++]='X';
				res[count++]='C';
			}
			else 
			{
				if(temp>50)
				{
					res[count++]='L';
					temp=temp-50;
				}
				while(temp>0)
				{
					res[count++]='X';
					temp=temp-10;
				}
			}

		}
		else if(temp>=100&&temp<=900)
		{
			if(temp==400)
			{
				res[count++]='C';
				res[count++]='D';
			}
			else if(temp==500)
			{
				res[count++]='D';
			}
			else if(temp==900)
			{
				res[count++]='C';
				res[count++]='M';
			}
			else 
			{
				if(temp>500)
				{
					res[count++]='D';
					temp=temp-500;
				}
				while(temp>0)
				{
					res[count++]='C';
					temp=temp-100;
				}
			}
		}
		else if(temp>=1000&&temp<=4000)
		{
			while(temp>0)
			{
				res[count++]='M';
				temp=temp-1000;
			}
		}
		i=prev;
		j=count-1;
		while(i<j)
		{
			char temp=res[i];
			res[i]=res[j];
			res[j]=temp;
			i++;j--;
		}
		prev=count;
		mul=mul*10;
		num=num/10;
	}
	res[count]='\0';
	i=0;j=count-1;
	while(i<j)
		{
			char temp=res[i];
			res[i]=res[j];
			res[j]=temp;
			i++;j--;
		}
	//printf("%s",res);
	return res;
}
