#include <stdio.h>
#include <math.h>

int main(){
	long long int t; scanf(" %lld",&t);
	for(long long int i=1; i<=t; i++){
		long long int n,m; scanf(" %lld %lld", &n, &m);
		long long unsigned res = pow(2,n*m);
		printf("Case #%lld: %llu\n", i, res);
	}
}
