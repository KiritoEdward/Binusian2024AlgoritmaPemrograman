#include <stdio.h>
#include <string.h>

int main(){
    long long int T, i, j, res, kur, panjang, simpan;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++){
        char letters[100005];
        scanf("%[^\n]", &letters);
        getchar();
        res = 0;
        kur = 0;
        panjang = strlen(letters);
        long long int cari[30] = {0};
        for (j = 0; j < panjang; j++){
            if (letters[j] == 97)
                cari[1] = 1;
            else if (letters[j] == 98)
                cari[2] = 1;
            else if (letters[j] == 99)
                cari[3] = 1;
            else if (letters[j] == 100)
                cari[4] = 1;
            else if (letters[j] == 101)
                cari[5] = 1;
            else if (letters[j] == 102)
                cari[6] = 1;
            else if (letters[j] == 103)
                cari[7] = 1;
            else if (letters[j] == 104)
                cari[8] = 1;
            else if (letters[j] == 105)
                cari[9] = 1;
            else if (letters[j] == 106)
                cari[10] = 1;
            else if (letters[j] == 107)
                cari[11] = 1;
            else if (letters[j] == 108)
                cari[12] = 1;
            else if (letters[j] == 109)
                cari[13] = 1;
            else if (letters[j] == 110)
                cari[14] = 1;
            else if (letters[j] == 111)
                cari[15] = 1;
            else if (letters[j] == 112)
                cari[16] = 1;
            else if (letters[j] == 113)
                cari[17] = 1;
            else if (letters[j] == 114)
                cari[18] = 1;
            else if (letters[j] == 115)
                cari[19] = 1;
            else if (letters[j] == 116)
                cari[20] = 1;
            else if (letters[j] == 117)
                cari[21] = 1;
            else if (letters[j] == 118)
                cari[22] = 1;
            else if (letters[j] == 119)
                cari[23] = 1;
            else if (letters[j] == 120)
                cari[24] = 1;
            else if (letters[j] == 121)
                cari[25] = 1;
            else if (letters[j] == 122)
                cari[26] = 1;
        }
        for(j = 0; j < 30; j++){
            res += cari[j];
        }
        printf("Case #%lld: %lld\n", i, res);
    }
    return 0;
}
