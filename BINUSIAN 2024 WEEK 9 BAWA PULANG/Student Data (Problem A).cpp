#include <stdio.h>

struct Student {
    long long int id, tanggal, bulan, tahun;
    char nama[1000];
	char alamat[1000];
};

int main() {
    long long int T, i, id, q, j;
    struct Student data[1005];
    long long int jumlah_data = 0;
    scanf("%d", &T);
    for(i = 0; i < T; i++) {
        scanf("%lld %lld %lld %lld %s %s", &data[jumlah_data].id, &data[jumlah_data].tanggal,
            &data[jumlah_data].bulan, &data[jumlah_data].tahun, data[jumlah_data].nama, data[jumlah_data].alamat);
        jumlah_data++;
    }

    scanf("%lld", &q);
    for(i = 1; i <= q; i++) {
        scanf("%lld", &id);
        j = 0;
        while(j < jumlah_data) {
            if(data[j].id == id) {
                printf("%d. %s was born on %d/%d/%d and live at %s\n", i, data[j].nama,
                    data[j].tanggal, data[j].bulan, data[j].tahun, data[j].alamat);
                break;
            }
            j++;
        }
        if(j == jumlah_data) {
            printf("No data found!\n");
        }
    }
    return 0;
}
