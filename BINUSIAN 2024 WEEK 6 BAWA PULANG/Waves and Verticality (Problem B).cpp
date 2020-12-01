#include<stdio.h>

int main(){
	long long int N;
	scanf("%lld",&N);
	long long int koordinat[N];
	for(long long int i=1 ; i <= N ; i++){
		scanf("%lld",&koordinat[i]);
	}
	for(long long int j=1 ; j <= N ; j++){
		for(long long int k=1 ; k <= 9 ; k++){
			if(koordinat[j]==k){
				printf("#");
			}else{
				printf(".");
			}
		}
		printf("\n");
	}
}
