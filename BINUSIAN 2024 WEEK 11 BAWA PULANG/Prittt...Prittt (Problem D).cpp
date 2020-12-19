#include<stdio.h>

void quickSortAsc(long long int a[], long long int lo, long long int hi){ 
    long long int i=lo, j=hi, h; 
    long long int pivot=a[lo]; 
    do{ 
        while (a[i]<pivot) i++; 
        while (a[j]>pivot) j--; 
        if (i<=j) 
        { 
            h=a[i]; a[i]=a[j]; a[j]=h;
            i++; j--; 
        } 
    } while (i<=j); 
    if (lo<j) quickSortAsc(a, lo, j); 
    if (i<hi) quickSortAsc(a, i, hi); 
}

int main(){
	long long int counter;
	scanf("%lld",&counter);
	long long int isiAngka[counter];
	for(long long int i=0 ;i < counter ; i++){
		scanf("%lld",&isiAngka[i]); getchar();
	}
	quickSortAsc(isiAngka,0,counter-1);
	
	long long int jumlahCari;
	scanf("%lld",&jumlahCari); getchar();
	long long int angkaCari;
	for(long long int j=0; j < jumlahCari;j++){
		scanf("%lld",&angkaCari); getchar();
		long long int first = 0;
		long long int last = counter - 1;
		long long int middle = (first+last)/2;
		while (first <= last) {
			if (isiAngka[middle] < angkaCari){
				first = middle + 1;
			}
			else if (isiAngka[middle] == angkaCari) {
				printf("%lld\n", middle+1);
				break;
			}
			else
				last = middle - 1;
			middle = (first + last)/2;
  		}
		if (first > last){
			printf("-1\n");
		}
	}
	return 0;
}
