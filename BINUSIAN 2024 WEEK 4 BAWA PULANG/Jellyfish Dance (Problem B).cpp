#include<stdio.h>

int main(){
	int counter,angka[105],jumlah,awal,akhir,total = 0;
	scanf("%d",&counter);
	for(int i=1;i<=counter;i++){
		scanf("%d",&angka[i]);
	}
	scanf("%d",&jumlah);
	for(int j=0;j<jumlah;j++){
		scanf("%d %d",&awal,&akhir);
		for(int k=awal;k<=akhir;k++){
			total = total + angka[k];
		}
		printf("Case #%d: %d\n",j+1,total);
		total = 0;
	}
}
