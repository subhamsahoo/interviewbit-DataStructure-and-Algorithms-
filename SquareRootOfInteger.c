/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int Sqrt(int A) {
    if(A==1)
    return 1;
    if(A<=0)
    return 0;
int start=0,end=A;
long long mid;
 while(start<=end)
 {
	 mid=(long long)start+(end-start)/2;
	 if((mid*mid)<=(long long)A &&((mid+1)*(mid+1))>(long long)A)
		 return (int)mid;
	 else if(mid*mid<(long long)A)
		 start=(int)mid;
	 else if(mid*mid>(long long)A)
		 end=(int)mid;
 }
}
