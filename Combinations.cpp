int sub(vector<vector<int> > &res,vector<int> &nums,vector<int> &vec, int begin,int target) {
		if(vec.size()==target)
		res.push_back(vec);
		for (int j = begin; j != nums.size(); ++j) {
			vec.push_back(nums[j]);
			sub(res, nums, vec, j + 1,target);
			vec.pop_back();
		}
}
vector<vector<int> > Solution::combine(int n, int k) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> nums;
    for(int i=1;i<=n;i++)
    nums.push_back(i);
    vector<vector<int> > res;
	vector<int> vec;
	sub(res, nums, vec, 0,k);
	return res;
}
