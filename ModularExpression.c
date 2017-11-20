/**
 * @input A : Integer
 * @input B : Integer
 * @input C : Integer
 * 
 * @Output Integer
 */
long long MOD(long long  a, long long b){
    return (a%b + b)%b;
}

int Mod(int A, int B, int C) {
    if(B==0 & A==0) return 0;
    if(B == 0) return 1;
    if(B == 1) return MOD(A,C);
    
    if(B%2 == 0){
        long long y = MOD(Mod(A, B/2, C),C);
        
        return MOD( y*y ,C);
    }
    else{
        return MOD( MOD(Mod(A, B-1, C),C) * MOD(A,C), C);
    }
}