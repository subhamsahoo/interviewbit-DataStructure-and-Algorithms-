
vector<vector<int> > solution;
void generate(vector<int> &v,int current,int length)
{
	if(current==length)
	{
		solution.push_back(v);
		return;
	}
	for(int i=current;i<=length;i++)
	{
		int temp=v[i];
		v[i]=v[current];
		v[current]=temp;
		generate(v,current+1,length);
		temp=v[i];
		v[i]=v[current];
		v[current]=temp;
	}
}


vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    solution.clear();
    generate(A,0,A.size()-1);
    return solution;
}
