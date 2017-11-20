vector<int> Solution::findSubstring(string A, const vector<string> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int clength=B[0].size();
    int tlength=B.size();
    vector<int> result;
    if(A.size()==0||B.size()==0||A.size()<clength*tlength)
    return result;
    unordered_map<string,int> m;
    for(int i=0;i<tlength;i++)
    {
        if(m.find(B[i])!=m.end())
        m[B[i]]++;
        else
        {
            m[B[i]]=1;
        }
    }
    for(int i=0;i<A.size()-(clength*tlength)+1;i++)
    {
        unordered_map<string,int> t;
        int j=0;
        while(1)
        {
            string temp=A.substr(i+j*clength,clength);
            if(m.find(temp)==m.end())
            break;
            else
            {
                if(t.find(temp)==t.end())
                t[temp]=1;
                else
                t[temp]++;
                if(t[temp]>m[temp])
                break;
                j++;
            }
            if(j==tlength)
            {
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}
