#include <stdio.h>
#include<string.h>

struct data{
    int number;
    char nama[15];
};
struct data simpan[105];

int main(){
    int N, i, x, y;
    struct data temp;
    scanf("%d", &N);
    getchar();
    for (i = 0; i < N; i++){
        scanf("%s %d", &simpan[i].nama, &simpan[i].number);
        getchar();
    }
    for (x = 0; x < N; x++){
        for (y = N - 1; y > x; y--){
            if (simpan[y].number < simpan[y - 1].number){
                temp = simpan[y - 1];
                simpan[y - 1] = simpan[y];
                simpan[y] = temp;
            }
            else if (simpan[y].number == simpan[y - 1].number){
                if (strcmp(simpan[y].nama, simpan[y - 1].nama) < 0){
                    temp = simpan[y - 1];
                    simpan[y - 1] = simpan[y];
                    simpan[y] = temp;
                }
            }
        }
    }
    for(i = 0; i < N; i++){
        printf("%s\n", simpan[i].nama);
    }
    return 0;
}
