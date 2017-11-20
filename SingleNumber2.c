int Solution::singleNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
     int ans =0;
   
   for(int i=0;i<32;i++){
       
       int value = (1<<i), sum =0;
       
       for(int j=0;j<A.size();j++){
           if(A[j]&value)
            sum+=1;
       }
       
       if(sum%3)
            ans|= value;
   }
   
   return ans;
}
