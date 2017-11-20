
void sets(vector<int> &nums,int begin,vector<int> &temp,vector<vector<int> > &result)
{
    result.push_back(temp);
    for(int i=begin;i<nums.size();i++)
    {
        temp.push_back(nums[i]);
        sets(nums,i+1,temp,result);
        temp.pop_back();
    }
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    sort(A.begin(),A.end());
    vector<vector<int> > result;
    vector<int> temp;
    sets(A,0,temp,result);
    return result;
}
