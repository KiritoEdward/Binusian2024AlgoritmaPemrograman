#include<stdio.h>

int main(){
	long long int jumlahArray,isiDompet,hitung = 0;
	scanf("%lld %lld",&jumlahArray,&isiDompet);
	long long int sereal[jumlahArray],susu[jumlahArray];
	for(int j=0;j<jumlahArray;j++){
		scanf("%lld",&sereal[j]);
	}
	for(int k=0;k<jumlahArray;k++){
		scanf("%lld",&susu[k]);
	}
	for(int m=0;m<jumlahArray;m++){
		for(int n=0;n<jumlahArray;n++){
			if(sereal[m]+susu[n]==isiDompet){
				hitung++;
			}
		}
	}
	printf("%lld\n",hitung);
}
