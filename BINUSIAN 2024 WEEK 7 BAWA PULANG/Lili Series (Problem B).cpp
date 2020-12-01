#include<stdio.h>
long long int hitung = 0;
long long int liliSeries(long long int N){
	if(N==0){
		return 1;
	}else if(N==1){
		return 2;
	}
	if(N==3 || N==4){
		hitung++;
	}
	if(N%3==0){
		return liliSeries(N-(N/3))+1;
	}else{
		return N + liliSeries(N-1) + liliSeries(N-2) + 1;
	}
}

int main(){
	long long int T,N;
	scanf("%lld",&T);
	
	for(long long int i=0; i < T ; i++){
		scanf("%lld",&N);
		long long int hasil = 0;
		hasil = liliSeries(N);
		printf("Case #%lld: %lld %lld\n",i+1,hasil,hitung);
		hitung = 0;
	}
}
