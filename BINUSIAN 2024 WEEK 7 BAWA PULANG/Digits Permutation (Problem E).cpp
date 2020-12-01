#include<stdio.h>

long long int factorial(long long int n){ 
    if (n == 0) 
        return 1; 
    return n * factorial(n - 1); 
}

long long int findSum(long long int A[], long long int N){
    if (N <= 0) 
        return 0; 
    return (findSum(A, N - 1) + A[N - 1]); 
}

long long int result(long long int k,long long int counter,long long int res,long long int sum_digit){
	if(counter==0){
		return res;
	}else{
		res+=(k*sum_digit);
		return result(k*10,counter-1,res,sum_digit);	
	}
}

int main(){
	long long int t;
	scanf("%lld",&t);
	
	for(long long int T=0;T<t;T++){
		long long int n;
		scanf("%lld",&n);
		
		long long int arr[n];
		for(long long int i=0;i<n;i++){
			scanf("%lld",&arr[i]);
		}
		
		long long int fact=factorial(n);
		long long int digit_sum = findSum(arr,n);
		
		digit_sum*=(fact/n);
		long long int res = result(1,n,0,digit_sum);
		
		printf("Case #%lld: %lld\n",T+1,res);
	}
	return 0;
}
