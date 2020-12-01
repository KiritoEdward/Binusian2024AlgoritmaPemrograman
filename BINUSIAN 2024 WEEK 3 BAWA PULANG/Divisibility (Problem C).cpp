#include<stdio.h>

int main(){
	long long int jumlah,pembagi,angka,hitung=0;
	scanf("%lld %lld",&jumlah,&pembagi);
	for(long long int i=0;i<jumlah;i++){
		scanf("%lld",&angka);
		if(angka%pembagi==0){
			hitung++;
		}
	}
	printf("%lld\n",hitung);
}
