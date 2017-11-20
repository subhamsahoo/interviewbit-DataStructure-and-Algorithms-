const int no_of_chars = 127;
string Solution::minWindow(string str, string pat) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int len1 = str.length();
    int len2 = pat.length();
    if (len1 < len2)
        return "";
 
    int hash_pat[no_of_chars] = {0};
    int hash_str[no_of_chars] = {0};
 
    for (int i = 0; i < len2; i++)
        hash_pat[pat[i]]++;
 
    int start = 0, start_index = -1, min_len = INT_MAX;
 
    int count = 0; 
    for (int j = 0; j < len1 ; j++)
    {
        hash_str[str[j]]++;
     if (hash_pat[str[j]] != 0 &&
            hash_str[str[j]] <= hash_pat[str[j]] )
            count++;
 
        if (count == len2)
        {
            while ( hash_str[str[start]] > hash_pat[str[start]]
                   || hash_pat[str[start]] == 0)
            {
 
                if (hash_str[str[start]] > hash_pat[str[start]])
                    hash_str[str[start]]--;
                start++;
            }
 
            int len_window = j - start + 1;
            if (min_len > len_window)
            {
                min_len = len_window;
                start_index = start;
            }
            hash_str[no_of_chars] = {0};
        }
    }
 
    if (start_index == -1)
    {
       return "";
    }
 
    return str.substr(start_index, min_len);
}