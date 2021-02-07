#include <stdio.h>
#include <string.h>

int main()
{
    int jumlah, i, j, hasilCek, k, hasil, cekDepan, cekBelakang, indeks, panjang;
    char kalimatCari[31], semuaKalimat[31][31];
    scanf("%d %s", &jumlah, kalimatCari);
    getchar();
    panjang = strlen(kalimatCari);
    indeks = panjang - 1;
    for (i = 0; i < jumlah; i++)
    {
        scanf("%s", semuaKalimat[i]);
        getchar();
    }
    hasilCek = 0;
    for (i = 0; i < jumlah; i++) //Cek Horizontal
    {
        if(hasilCek == 1)
        {
            break;
        }
        for(j = 0; j < jumlah; j++)
        {
            if(semuaKalimat[i][j] == kalimatCari[0])
            {
                cekDepan = j;
                hasil = 0;
                while(semuaKalimat[i][cekDepan] == kalimatCari[cekDepan] && cekDepan < jumlah)
                {
                    hasil++;
                    cekDepan++;
                }
                if(hasil == panjang)
                {
                    hasilCek = 1;
                    break;
                }
            }
            else if(semuaKalimat[i][j] == kalimatCari[indeks])
            {
                cekDepan = j;
                cekBelakang = indeks;
                hasil = 0;
                while(semuaKalimat[i][cekDepan] == kalimatCari[cekBelakang] && (cekDepan < jumlah || cekBelakang >= 0))
                {
                    hasil++;
                    cekDepan++;
                    cekBelakang--;
                }
                if(hasil == panjang)
                {
                    hasilCek = 1;
                    break;
                }
            }
        }
    }
    for (i = 0; i < jumlah; i++) //Cek Vertikal
    {
        if(hasilCek == 1)
        {
            break;
        }
        for(j = 0; j < jumlah; j++)
        {
            if(semuaKalimat[i][j] == kalimatCari[0])
            {
                cekDepan = i;
                hasil = 0;
                while(semuaKalimat[cekDepan][j] == kalimatCari[cekDepan] && cekDepan < jumlah)
                {
                    hasil++;
                    cekDepan++;
                }
                if(hasil == panjang)
                {
                    hasilCek = 1;
                    break;
                }
            }
            else if(semuaKalimat[i][j] == kalimatCari[indeks])
            {
                cekDepan = i;
                cekBelakang = indeks;
                hasil = 0;
                while(semuaKalimat[cekDepan][j] == kalimatCari[cekBelakang] && (cekDepan < jumlah || cekBelakang >= 0))
                {
                    hasil++;
                    cekDepan++;
                    cekBelakang--;
                }
                if(hasil == panjang)
                {
                    hasilCek = 1;
                    break;
                }
            }
        }
    }
    if (hasilCek == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
