vector<int> Solution::dNums(vector<int> &A, int B) {
        unordered_map<int,int>m;
    unordered_map<int,int>::iterator it;
    vector<int> result;
    if(B>A.size())
    return result;
    int count=B,w=0;
    for(int i=0;i<B;i++)
    {
        it=m.find(A[i]);
        if(it!=m.end())
        {
            count=count-1;
            it->second=(it->second)+1;
        }
        else
        m.insert(pair<int,int>(A[i],1));
    }
    if(B!=A.size()){
    for(int i=B;i<A.size();i++)
    {
        result.push_back(count);
        it=m.find(A[w]);
        if(it!=m.end()){
        if((it->second)>1)
        it->second=(it->second)-1;
        else{
        count=count-1;
            m.erase(A[w]);
        }
        }
        it=m.find(A[i]);
        if(it!=m.end())
        it->second=(it->second)+1;
        else
        {
            count=count+1;
            m.insert(pair<int,int>(A[i],1));
        }
        w++;
        
    }
    }
    result.push_back(count);
    return result;
}
