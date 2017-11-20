vector<int> Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int n=A.size();
vector<int> v;
bool x[n];
int i;
memset(x,false,sizeof(x));
for(i=0;i<n;++i){
if(x[A[i]-1]==true)
v.push_back(A[i]);
else
x[A[i]-1]=true;
}
for(i=0;i<n;++i)
{
if(x[i]==false)
{
v.push_back(i+1);
}
}
return v;
}
