int Solution::diffPossible(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
        vector <int> :: const_iterator it;
        unordered_set<int> m;
        unordered_set<int>::iterator t;
        for(it=A.begin();it!=A.end();it++){
            int b=(*it)-B;
            int c=(*it)+B;
            t=m.find(b);
            if(t!=m.end())
            {
                return 1;
            }
            t=m.find(c);
            if(t!=m.end())
            {
                return 1;
            }
            m.insert(*it);
        }
        return 0;
}
