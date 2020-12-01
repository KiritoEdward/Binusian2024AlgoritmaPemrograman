#include<stdio.h>

long long int calculateSum(int n) { 
    long long int sum = 0; 
    sum = 1 << n; 
    return (sum); 
} 
   
int main() { 
    long long int counter,awal,akhir,hasil = 0;
    scanf("%lld",&counter);
    for(long long int i=0 ; i < counter ; i++){
    	scanf("%lld %lld",&awal,&akhir);
    	for(int j=awal;j<=akhir;j++){
			hasil+=(calculateSum(j-1));
		}
		printf("Case #%lld: %lld\n",i+1,hasil);
		hasil = 0;
	}
    return 0; 
} 
