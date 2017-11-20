vector<int> Solution::twoSum(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
            vector <int> :: const_iterator it;
        unordered_map<int,int> m;
        unordered_map<int,int>::iterator t;
        int i=0;
        vector <int> result;
        for(it=A.begin();it!=A.end();it++){
            i++;
            int b=B-(*it);
            t=m.find(b);
            if(t!=m.end())
            {
                result.push_back(t->second);
                result.push_back(i);
                break;
            }
            m.insert(pair<int,int>(*it,i));
        }
        return result;
}
