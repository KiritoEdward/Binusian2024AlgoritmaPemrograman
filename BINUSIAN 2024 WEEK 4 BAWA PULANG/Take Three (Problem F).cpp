#include <stdio.h>

long long int kemungkinan(long long int x){ 
	long long int result=1,temp=x;
	for(int i=0;i<3;i++){
		result*=temp;
		temp--;
	}
	result/=6;
	return result;
}

int main(){
	int counter;
	scanf(" %d",&counter);
	for(int i=1;i<=counter;i++){
		int jumlah;
		scanf(" %d",&jumlah);
		long long int arr[1000];
		for(int j=0;j<1000;j++){
			arr[j]=0;
		}
		for(int j=0;j<jumlah;j++){
			int warna; 
			scanf(" %d", &warna);
			arr[warna-1]++;
		}
		long long int sum=0;
		for(int j=0;j<1000;j++){
			if(arr[j]==3){
				sum++;
			} else if(arr[j]>3){
				sum+=kemungkinan(arr[j]);
			}
		}
		printf("Case #%d: %lld\n", i,sum);
	}
}
