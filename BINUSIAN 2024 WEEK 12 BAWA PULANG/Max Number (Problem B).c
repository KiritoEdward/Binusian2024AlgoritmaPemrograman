#include <stdio.h>

int cariTerbesar(int arr[], int n){
    int terbesar = arr[0];
    int i;
    for (i = 1; i < n; i++){
        if (arr[i] > terbesar){
            terbesar = arr[i];
        }
    }
    return terbesar;
}

void belajarBerhitung(int arr[], int n, int exp){
    int output[n];
    int i, count[10] = {0};
    for (i = 0; i < n; i++){
        count[(arr[i] / exp) % 10]++;
    }
    for (i = 1; i < 10; i++){
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--){
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++){
        arr[i] = output[i];
    }
}

void radixSort(int arr[], int n){
    int m = cariTerbesar(arr, n);
    int exp;
    for (exp = 1; m / exp > 0; exp *= 10){
        belajarBerhitung(arr, n, exp);
    }
}

int main(){
    int jumlahAsli, jumlahHapus, i, j, max;
    int original[105] = {0};
    int hapus[105] = {0};
    
    scanf("%d %d", &jumlahAsli, &jumlahHapus);
    getchar();
    for (i = 0; i < jumlahAsli; i++){
        scanf("%d", &original[i]);
    }
    getchar();
    for (i = 0; i < jumlahHapus; i++){
        scanf("%d", &hapus[i]);
    }
    getchar();
    
	radixSort(original, jumlahAsli);
    radixSort(hapus, jumlahHapus);
    
	max = -1;
    for(i = jumlahAsli - 1; i >= 0; i--){
        if(original[i] > max){
            max = original[i];
        }
        for(j = jumlahHapus - 1; j >= 0; j--){
            if(max == hapus[j]){
                max = -1;
                break;
            }
        }
    }
    
    printf("Maximum number is %d\n", max);
    return 0;
}
