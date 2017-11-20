/**
 * @input x : Integer
 * @input n : Integer
 * @input d : Integer
 * 
 * @Output Integer
 */
int powmod(int x, int n, int d) {
long long result=1;
long long base=x;
if(n==0)
	return 1%d;
while(n){
if(n%2==1)
result=(result*base)%d;
base=(base*base)%d;
n=n/2;
}
if(result<0)
result=result+d;
return result%d;
}