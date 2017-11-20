/**
 * @input A : String termination by '\0'
 * 
 * @Output Integer
 */
int romanToInt(char* A) {
    	int res=0,i;
	for(i=0;A[i]!='\0';i++)
	{
		if(A[i]=='I'&&A[i+1]=='V'&&A[i+1]!='\0')
		{
			res=res+4;
			i++;
		}
		else if(A[i]=='I'&&A[i+1]=='X'&&A[i+1]!='\0')
		{
			res=res+9;
			i++;
		}		
		else if(A[i]=='X'&&A[i+1]=='L'&&A[i+1]!='\0')
		{
			res=res+40;
			i++;
		}
		else if(A[i]=='X'&&A[i+1]=='C'&&A[i+1]!='\0')
		{
			res=res+90;
			i++;
		}
		else if(A[i]=='C'&&A[i+1]=='D'&&A[i+1]!='\0')
		{
			res=res+400;
			i++;
		}
		else if(A[i]=='C'&&A[i+1]=='M'&&A[i+1]!='\0')
		{
			res=res+900;
			i++;
		}
		else if(A[i]=='I')
			res=res+1;
		else if(A[i]=='V')
			res=res+5;
		else if(A[i]=='X')
			res=res+10;
		else if(A[i]=='L')
			res=res+50;
		else if(A[i]=='C')
			res=res+100;
		else if(A[i]=='D')
			res=res+500;
		else if(A[i]=='M')
			res=res+1000;
	}
	return res;
}
