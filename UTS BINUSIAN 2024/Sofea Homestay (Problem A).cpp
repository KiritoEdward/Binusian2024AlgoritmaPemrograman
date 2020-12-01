#include<stdio.h>
#include<math.h>

int main(){
	long long int jumlah = 12;
	double angka,jumlahKotor,pajakTahunan,kebersihanTahunan,jumlahBersih;
	for(long long int i=0 ; i < jumlah; i++){
		scanf("%lf, ",&angka);
		jumlahKotor = jumlahKotor + angka;
	}
	pajakTahunan = floor(0.07 * jumlahKotor);
	kebersihanTahunan = floor(0.05 * jumlahKotor);
	jumlahBersih = jumlahKotor - (pajakTahunan) - (kebersihanTahunan);
	printf("%.2lf, %.2lf, %.2lf\n",pajakTahunan,kebersihanTahunan,jumlahBersih);
}
