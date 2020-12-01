#include <stdio.h>

int main(){
	long long int n,k; scanf(" %lld %lld",&n, &k);
	char month[n][101];
	for(int i=0;i<n;i++){
		scanf(" %[^\n]", month[i]);
	}
	long long int t; scanf(" %lld", &t);
	for(long long int i=1; i<=t; i++){
		long long int day; scanf(" %lld", &day);
		long long int lastday = day%k;
		day/=k;
		if (lastday==0){
			day--;
			lastday=k;
		}
		if(day>0){
			day%=n;
		}
		printf("Case #%lld: %s %lld\n", i, month[day], lastday);
	}
}
