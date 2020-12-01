#include <stdio.h>

int main(){
	int counter;
	scanf(" %d",&counter);
	for(int i=1;i<=counter;i++){
		int jumlah;
		scanf(" %d",&jumlah);
		long long int arr[200005];
		for(int j=0;j<200000;j++){
			arr[j]=0;
		}
		for(int j=0;j<jumlah;j++){
			int angka; 
			scanf(" %d", &angka);
			arr[angka-1]++;
		}
		long long int max=-1;
		for(int j=0;j<200000;j++){
			if(arr[j]>max){
				max = arr[j];
			}
		}
		long long int temp[200005],indeks = 0;
		printf("Case #%d: %lld\n", i,max);
		for(int j=0;j<200000;j++){
			if(arr[j]==max){
				temp[indeks++] = j+1;
			}
		}
		for(int k=0;k<indeks;k++){
			if(k==indeks-1){
				printf("%lld",temp[k]);
			}else{
				printf("%lld ",temp[k]);
			}
		}
		printf("\n");
	}
}
