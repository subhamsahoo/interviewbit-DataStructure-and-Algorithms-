int sub(vector<vector<int> > &res,vector<int> &nums,vector<int> &vec, int begin,int* sum,int target) {
		if(*sum==target)
		res.push_back(vec);
		for (int j = begin; j != nums.size(); ++j) {
			if (j == begin || nums[j] != nums[j - 1]) { 
			vec.push_back(nums[j]);
			*sum=(*sum)+nums[j];
			sub(res, nums, vec, j + 1,sum,target);
			*sum=(*sum)-vec[vec.size()-1];
			vec.pop_back();
			}
		}
}

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    		sort(A.begin(), A.end());
        vector<vector<int> > res;
		vector<int> vec;
		int sum=0;
		int target=B;
		sub(res, A, vec, 0,&sum,target);
		return res;
}
