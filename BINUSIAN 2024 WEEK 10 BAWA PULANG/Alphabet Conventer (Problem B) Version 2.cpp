#include <stdio.h>
#include <string.h>

int main(){
    int counter, N, i, j, k, panjang, akhir[27];
    char kalimat[105];
    char lama, baru, temp;
    int awal[27] = {0};
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &counter);
    for (i = 0; i < counter; i++){
        fscanf(fp, "%[^\n]\n", &kalimat);
        panjang = strlen(kalimat);
        for (j = 1; j < 27; j++){
            awal[j] = 0;
            akhir[j] = 0;
        }
        for (j = 0; j < panjang; j++)
        {
            kalimat[j] -= 64;
            awal[kalimat[j]]++;
        }
        fscanf(fp, "%d\n", &N);
        for (j = 0; j < N; j++){
            fscanf(fp, "%c %c\n", &lama, &baru);
            if (lama != baru){
                lama -= 64;
                baru -= 64;
                if (awal[lama] > 0 && akhir[lama] == 0){
                    awal[baru] += awal[lama];
                    awal[lama] = 0;
                }
                akhir[lama] = 1;
            }
        }
        for (k = 1; k < 27; k++){
            if (awal[k] != 0){
                temp = 64 + k;
                printf("%c %d\n", temp, awal[k]);
            }
        }
    }
    fclose(fp);
    return 0;
}
