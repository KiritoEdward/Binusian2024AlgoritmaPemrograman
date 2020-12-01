#include <stdio.h>

long long int total(int n, long long int sum){
	if(n>0){
		int a; scanf(" %d", &a);
		return total(n-1, sum+a);
	}
	if(n==0){
		return sum;
	}
}

int main(){
	int t; scanf(" %d", &t);
	for(int C = 1; C <= t; C++){
		int n; scanf(" %d", &n);
		printf("Case #%d: %lld\n", C, total(n,0));
	}
}
