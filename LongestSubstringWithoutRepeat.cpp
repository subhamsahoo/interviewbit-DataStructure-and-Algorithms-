int Solution::lengthOfLongestSubstring(string A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
        int start=0,max=0,i;
    unordered_map<char,int> m;
    unordered_map<char,int>::iterator t;
    for(i=0;A[i]!='\0';i++)
    {
        t=m.find(A[i]);
        if(t!=m.end())
        {
            if(start>(t->second))
            t->second=i;
            else
            {
            if((i-start)>max)
            max=i-start;
            start=(t->second)+1;
            t->second=i;
            }
        }
        else
        m.insert(pair<char,int>(A[i],i));
    }
    /*for(t=m.begin();t!=m.end();t++)
    {
        printf("%c %d\n ",t->first,t->second);
    }*/
    if((i-start)>max)
        max=i-start;
    
    return max;
}
