#include <stdio.h>
#include <string.h>

int testCase = 0;
char kata2[100][105];
char hurufTemp[30];
int proses;
char huruf[30];
int jumlahHuruf[30];

void alphabet(){
	for(int i = 0; i < 26; i++){
		huruf[i] = i+65;
	}
}
void jumlahtotal(){
	for(int i = 0; i < 26; i++){
		jumlahHuruf[i] = 0;
	}
}

void temp(){
	for(int i = 0; i < 26; i++){
		hurufTemp[i] = '#';
	}
}
int flag = 0;
void swap(char huruf1, char huruf2, int testTemp){
	for(int j = 0; j < 26; j++){
		if(huruf1 == hurufTemp[j]){
			return;
		}
	}
	for(int i = 0; i < strlen(kata2[testTemp]); i++){
		if(kata2[testTemp][i] == huruf1){
			kata2[testTemp][i] = huruf2;
		}
	}
	hurufTemp[flag] = huruf1;
	flag++;
}
void hitung(char* kata2){
	for(int i = 65; i <= 90; i++){
		for(int j = 0; j < strlen(kata2); j++){
			if(kata2[j] == i){
				jumlahHuruf[i-65]++;
			}
		}
	}
}
int main(){
	alphabet();
	jumlahtotal();
	temp();
	int testTemp = 0;
	char huruf1, huruf2;
	FILE *fp = fopen("testdata.in", "r");
	fscanf(fp, "%d\n", &testCase);
	while(testTemp < testCase){
		fscanf(fp, "%s %d\n", kata2[testTemp],&proses);
		int tempProses = 0;
		while(tempProses < proses){
			fscanf(fp, "%c %c\n", &huruf1, &huruf2);
			swap(huruf1, huruf2, testTemp);
			tempProses++;
		}
		hitung(kata2[testTemp]);
		for(int k = 0; k < 26; k++){
			if(jumlahHuruf[k] > 0){
				printf("%c %d\n", huruf[k], jumlahHuruf[k]);
			}
		}
		jumlahtotal();
		temp();
		flag = 0;
		testTemp++;
	}
	fclose(fp);
	return 0;
}
