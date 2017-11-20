string sorting(string temp)
{
    vector<int> v;
    for(int i=0;temp[i]!='\0';i++)
    v.push_back((int)temp[i]);
    sort(v.begin(),v.end());
    string result="";
    for(int i=0;i<v.size();i++)
        result=result+(char)v[i];
    return result;
}


vector<vector<int> > Solution::anagrams(const vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string>::const_iterator it;
    unordered_map<string,vector <int>> m;
    vector<vector<int> > result;
    int i=1;
    for(it=A.begin();it!=A.end();it++){
    string temp=sorting(*it);
    m[temp].push_back(i);
    i++;
    }
    unordered_map<string,vector <int>>::iterator t;
    for(t=m.begin();t!=m.end();t++)
    {
        result.push_back(t->second);
    }
    return result;
}
