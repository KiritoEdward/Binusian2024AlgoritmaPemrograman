#include<stdio.h>

int main(){
	long long int N,X,Y,angka,total = 0;
	scanf("%lld %lld %lld",&N,&X,&Y);
	for(int i=0;i<N;i++){
		scanf("%lld",&angka);
		if(angka%2==0){
			total = total  + (angka*Y);
		}else{
			total = total + (angka*X);
		}
	}
	printf("%lld\n",total);
}
