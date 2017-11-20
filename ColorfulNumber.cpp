int Solution::colorful(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        vector <int> a;
    	while(A>0)
	{
		a.push_back(A%10);
		A=A/10;
	}
	reverse(a.begin(), a.end());
	int sz=a.size(),i,j;
	unordered_set<int> m;
    unordered_set<int>::iterator t;
    	for(i=0;i<sz;i++)
	{
		int product=1;
		for(j=i;j<sz;j++)
		{
			product=product*a[j];
			t=m.find(product);
            if(t!=m.end())
            {
                return 0;
            }
            m.insert(product);
		}
	}
	return 1;
}
