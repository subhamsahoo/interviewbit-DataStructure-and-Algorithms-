int Solution::strStr(const string &haystack, const string &needle) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
       int j=0;

   if (needle[0] == '\0' || haystack[0] == '\0')
        return -1;

    for(int i=0; haystack[i] != '\0'; ++i){
        bool matched= true;

        for(j=0; needle[j]!= '\0'; ++j){
            
            if (haystack[i+j]== '\0')   
                return -1;
                
            if (haystack[i+j]!=needle[j]){  
                matched= false;
                break;
            }
        }
        
        if(matched)                     
            return i;
    }
    return -1;                  
}
