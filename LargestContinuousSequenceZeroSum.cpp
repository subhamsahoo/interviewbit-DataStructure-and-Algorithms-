vector<int> Solution::lszero(vector<int> &A) {
        vector<int> sum;
    vector<int> result;
    int s=0,start=-1,end=-1;
    vector<int>::iterator t;
    for(t=A.begin();t!=A.end();t++)
    {
        s=s+(*t);
        sum.push_back(s);
    }
    s=0;
    unordered_map<int,int> m;
    unordered_map<int,int>::iterator im;
    for(t=sum.begin();t!=sum.end();t++)
    {
        if((*t)==0)
        {
            start=0;
            end=s;
        }
        else{
        im=m.find(*t);
        if(im!=m.end())
        {
            if(start==-1&&end==-1){
            start=(im->second)+1;
            end=s;
            }
            else if((end-start+1)<(s-(im->second)))
            {
            start=(im->second)+1;
            end=s;
            }
        }
        else
        m.insert(pair<int,int>(*t,s));
        }
        s++;
    }
    if(start==-1&&end==-1)
    return result;
    for(int i=start;i<=end;i++)
    {
        result.push_back(A[i]);
    }
    return result;
}
