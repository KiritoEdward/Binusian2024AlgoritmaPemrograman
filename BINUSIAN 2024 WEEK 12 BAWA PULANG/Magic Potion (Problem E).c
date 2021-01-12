#include <stdio.h>

int main(){
    int counter, ramuanA, ramuanB, ramuanC, i, j, x, y, z, jumlah;
    long long int isiA[1005], isiB[1005], isiC[1005], target;
    scanf("%d", &counter);
    getchar();
    for (i = 1; i <= counter; i++){
        scanf("%d", &ramuanA);
        for (j = 0; j < ramuanA; j++){
            scanf("%lld", &isiA[j]);
        }
        scanf("%d", &ramuanB);
        for (j = 0; j < ramuanB; j++){
            scanf("%lld", &isiB[j]);
        }
        scanf("%d", &ramuanC);
        for (j = 0; j < ramuanC; j++){
            scanf("%lld", &isiC[j]);
        }
        scanf("%lld", &target);
        jumlah = 0;
        for (x = 0; x < ramuanA; x++){
            for (y = 0; y < ramuanB; y++){
                for (z = 0; z < ramuanC; z++){
                    if (isiA[x] + isiB[y] + isiC[z] == target){
                        jumlah++;
                    }
                }
            }
        }
        printf("Case #%d: %d\n", i, jumlah);
    }
    return 0;
}
