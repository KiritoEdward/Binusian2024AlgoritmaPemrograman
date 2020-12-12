#include <stdio.h>
#include <string.h>

void swap(int tanda2[], int n){
    int j, temp;
    for (j = 0; j < n; j++){
        temp = tanda2[j];
        tanda2[j] = tanda2[n - 1];
        tanda2[n - 1] = temp;
        n--;
    }
}

void tukar(char str[], char str2[], int n){
    int i, a;
    a = n - 1;
    for(i = 0; i < n; i++){
        str2[i] = str[a];
        a--;
    }
}

int main(){
    int T, N, i, j, k, panjang, max, idx, tanda[1005], tanda2[1005], sip, lanjut;
    char pass[1005][1005], pass2[1005][1005];
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &T);
    for (i = 1; i <= T; i++){
        fscanf(fp, "%d\n", &N);
        panjang = -1;
        for (j = 0; j < N; j++){
            fscanf(fp, "%[^\n]\n", &pass[j]);
            max = strlen(pass[j]);
            tukar(pass[j], pass2[j], max);
            if (max > panjang){
                idx = j;
                panjang = max;
            }
        }
        sip = 0;
        lanjut = 1;
        for (j = 0; j < 1005; j++){
            tanda[j] = 1;
        }
        for (j = 0; j < 1005; j++){
            tanda2[j] = 0;
        }
        for (j = 0; j < panjang; j++){
            if (lanjut == 1){
                for (k = 0; k < N - 1; k++){
                    if (pass[k][j] != pass[k + 1][j]){
                        tanda[j] = 0;
                        lanjut = 0;
                        break;
                    }
                }
            }
            else{
                tanda[j] = 0;
            }
        }
        lanjut = 1;
        for (j = 0; j < panjang; j++){
            if (lanjut == 1){
                for (k = 0; k < N - 1; k++){
                    if (pass2[k][j] == pass2[k + 1][j]){
                        tanda2[j] = 1;
                    }
                    else{
                        lanjut = 0;
                        break;
                    }
                }
            }
            else{
                tanda2[j] == 1;
            }
        }
        swap(tanda2, panjang);
        printf("Case #%d: ", i);
        for (j = 0; j < panjang; j++){
            if (tanda[j] == 1 || tanda2[j] == 1){
                sip++;
                printf("%c", pass[idx][j]);
            }
        }
        if (sip == panjang){
            printf("%s", pass[idx]);
            printf("\n");
            continue;
        }
        printf("\n");
    }
    fclose(fp);
    return 0;
}
