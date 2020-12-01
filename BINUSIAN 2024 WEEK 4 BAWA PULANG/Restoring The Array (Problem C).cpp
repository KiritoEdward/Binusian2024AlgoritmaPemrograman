#include <stdio.h> 
  
void geserKiri(long long int arr[], long long int n) { 
    int temp = arr[0], i; 
    for (i = 0; i < n - 1; i++) 
        arr[i] = arr[i + 1]; 
    arr[i] = temp; 
} 
  
int main() { 
    long long int counter,jumlahArray,isiArray[100005]; 
    scanf("%lld",&counter);
    for(int i=0;i<counter;i++){
    	scanf("%lld",&jumlahArray);
    	for(int j=0;j<jumlahArray;j++){
    		scanf("%lld",&isiArray[j]);
		}
		geserKiri(isiArray,jumlahArray);
		printf("Case #%lld:",i+1);
		for(int k=0;k<jumlahArray;k++){
			printf(" %lld",isiArray[k]);
		}
		printf("\n");
	}
    return 0; 
} 
