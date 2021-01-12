#include <stdio.h>
#include <math.h>

int cekBilanganPrima(int number){
    int i, tanda = 1;
    if (number == 2){
        return 0;
    }else{
        for (i = 2; i <= sqrt(number); i++){
            if (number % i == 0){
                tanda = 0;
                break;
            }
        }
        if (tanda == 1){
            return 0;
        }else{
            return 1;
        }
    }
}

int main(){
    int counter, ukuranSegitiga, i, j, k, batas, hasil;
    scanf("%d", &counter);
    getchar();
    for (i = 1; i <= counter; i++){
        batas = 2;
        scanf("%d", &ukuranSegitiga);
        getchar();
        printf("Case #%d:\n", i);
        for (j = 1; j <= ukuranSegitiga; j++){
            for (k = 1; k <= j; k++){
                while (cekBilanganPrima(batas)){
                    batas++;
                }
                hasil = batas;
                while (hasil >= 10){
                    hasil %= 10;
                }
                printf("%d", hasil);
                batas++;
            }
            printf("\n");
        }
    }
    return 0;
}
