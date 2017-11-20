int check(string temp)
{
    unordered_set<int> m;
    unordered_set<int>::iterator t;
    for(int i=0;temp[i]!='\0';i++)
    {
        if(temp[i]!='.')
        {
            int num=(int)temp[i];
            t=m.find(num);
            if(t!=m.end())
            return 0;
            m.insert(num);
            
        }
    }
    return 1;
}
int Solution::isValidSudoku(const vector<string> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<string>::const_iterator it;
    unordered_set<int> m;
    unordered_set<int>::iterator t;
    for(it=A.begin();it!=A.end();it++)
    {
        int res=check(*it);
        if(res==0)
        return res;
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(A[j][i]!='.')
        {
            int num=(int)A[j][i];
            t=m.find(num);
            if(t!=m.end())
            return 0;
            m.insert(num);
        }
        }
        m.clear();
    }
    int count=0;
    m.clear();
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<3;j++)
        {
            count++;
            if(A[i][j]!='.')
        {
            int num=(int)A[i][j];
            t=m.find(num);
            if(t!=m.end())
            return 0;
            m.insert(num);
        }
        }
        if(count>8){
        count=0;
        m.clear();
        }
    }
     count=0;
    m.clear();
    for(int i=0;i<9;i++)
    {
        for(int j=3;j<6;j++)
        {
            count++;
            if(A[i][j]!='.')
        {
            int num=(int)A[i][j];
            t=m.find(num);
            if(t!=m.end())
            return 0;
            m.insert(num);
        }
        }
        if(count>8){
        count=0;
        m.clear();
        }
    }
    count=0;
    m.clear();
    for(int i=0;i<9;i++)
    {
        for(int j=6;j<9;j++)
        {
            count++;
            if(A[i][j]!='.')
        {
            int num=(int)A[i][j];
            t=m.find(num);
            if(t!=m.end())
            return 0;
            m.insert(num);
        }
        }
        if(count>8){
        count=0;
        m.clear();
        }
    }
    
    
    return 1;
}
