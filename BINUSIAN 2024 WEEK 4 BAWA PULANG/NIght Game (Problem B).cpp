#include<stdio.h>

int main(){
	long long int counter,jumlahArray,isiArray[1005];
	scanf("%lld",&counter);
	for(int i=0 ; i<counter ; i++){
		scanf("%lld",&jumlahArray);
		for(int j=0;j<jumlahArray;j++){
			scanf("%lld",&isiArray[j]);
		}
		printf("Case #%lld:",i+1);
		for(int k=jumlahArray-1; k >=0; k--){
			printf(" %lld",isiArray[k]);
		}
		printf("\n");
	}
}
