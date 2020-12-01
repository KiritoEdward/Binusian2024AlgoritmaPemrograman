#include <stdio.h>

int main(){
	int t; scanf(" %d", &t);
	for(int C = 1; C <= t; C++){
		int n; scanf(" %d", &n);
		unsigned long long int sum = 0;
		for(int i = 1; i <= n; i++){
			unsigned long long int check; scanf(" %llu", &check);
			if(i%2==0) sum+=check;
		}
		printf("Case #%d: %llu\n", C, sum);
	}
}