#include<stdio.h>

int main()
{
    int tugas,UTS,UAS;
    int hitungTugas,hitungUTS,hitungUAS;
    int nilaiAkhir;
    
    scanf("%d %d %d",&tugas,&UTS,&UAS);
    hitungTugas = tugas * 0.2;
    hitungUTS = UTS *30/100;
    hitungUAS = UAS * 0.5;
    
    nilaiAkhir  = hitungTugas + hitungUTS + hitungUAS;
    
    printf("%.2f",(float)nilaiAkhir);
    
	return 0;
}

