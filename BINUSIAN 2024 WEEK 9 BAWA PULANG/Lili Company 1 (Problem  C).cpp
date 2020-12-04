#include<stdio.h>
#include<string.h>

struct company{
	char nama[105];
}data[105];

char karyawan[105];
long long int awal, akhir;

int main(){
	long long int jumlahKueriDatabase;
	scanf("%lld", &jumlahKueriDatabase);
    getchar();
	
	for(int i=0 ; i<105 ; i++){
		strcpy(data[i].nama, "Kosong");
	}
	for(long long int i=0 ; i<jumlahKueriDatabase ; i++){
		long long int kueriDatabase;
		scanf("%lld", &kueriDatabase);
        getchar();
		if(kueriDatabase == 1){
			long long int indeks = 0, namaSama=0;
			scanf("%[^\n]", &karyawan);
            getchar();
			for(int j=0 ; j<jumlahKueriDatabase ; j++){
				if(strcmp(data[j].nama,karyawan)==0) namaSama=-1;
			}
			for(int j=0 ; j<jumlahKueriDatabase ; j++){
				if(strcmp(data[indeks].nama, "Kosong")==0) break;
				indeks++;
			}
		   char kejelasan[105];
		   scanf("%[^\n]", &kejelasan);
		   getchar();
		   scanf("%[^\n]", &kejelasan);
		   getchar();
		   if(namaSama==-1) continue;
		   strcpy(data[indeks].nama, karyawan);
		}
		else if(kueriDatabase == 2){
			scanf("%lld %lld", &awal, &akhir);
			getchar();
			if(strcmp(data[awal-1].nama, "Kosong")==0 || strcmp(data[akhir-1].nama, "Kosong")==0 || strcmp(data[awal-1].nama, "Berjasa")==0 || strcmp(data[akhir-1].nama, "Berjasa")==0) continue;
			strcpy(karyawan, data[awal-1].nama);
			strcpy(data[awal-1].nama, data[akhir-1].nama);
			strcpy(data[akhir-1].nama, karyawan);
		}
		else if(kueriDatabase == 3){
			scanf("%lld", &awal);
			getchar();
			strcpy(data[awal-1].nama, "Kosong");
		}
		else if(kueriDatabase == 4){
			scanf("%lld", &awal);
			getchar();
			strcpy(data[awal-1].nama, "Berjasa");
		}
	}
	for(int j = 0 ; j<jumlahKueriDatabase ; j++){
		if(strcmp(data[j].nama, "Kosong")==0) continue;
		else if(strcmp(data[j].nama, "Berjasa")==0) continue;
		else{
			printf("%s\n", data[j].nama);
		}
	}
}
