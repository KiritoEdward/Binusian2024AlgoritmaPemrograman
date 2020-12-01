#include <stdio.h>

long long int ackerman(long long int m, long long int n) { 
    if (m == 0){ 
        return n+1; 
    } 
    else if((m > 0) && (n == 0)){ 
        return ackerman(m-1, 1); 
    } 
    else if((m > 0) && (n > 0)){ 
        return ackerman(m-1, ackerman(m, n-1)); 
    } 
} 
  
int main(){ 
    long long int A,B; 
    scanf("%lld %lld",&A,&B);
    
    long long int result= ackerman(A, B); 
    printf("result: %lld\n", result);
    
    return 0; 
} 
