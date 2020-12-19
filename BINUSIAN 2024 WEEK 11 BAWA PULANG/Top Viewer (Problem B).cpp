#include <stdio.h>
#include <string.h>

struct data{
    char nama[1005];
    char artis[1005];
    int view;
};
struct data baru[105];

int main(){
    int N, i, x, y;
    struct data temp;
    FILE *fp = fopen("testdata.in", "r");
    N = 0;
    while(!feof(fp)){
        fscanf(fp, "%[^#]#%[^#]#%d\n", &baru[N].nama, &baru[N].artis, &baru[N].view);
        N++;
    }
    for (x = 0; x < N; x++){
        for (y = N - 1; y > x; y--){
            if (baru[y].view > baru[y - 1].view){
                temp = baru[y - 1];
                baru[y - 1] = baru[y];
                baru[y] = temp;
            }
            else if (baru[y].view == baru[y - 1].view){
                if (strcmp(baru[y].nama, baru[y - 1].nama) < 0){
                    temp = baru[y - 1];
                    baru[y - 1] = baru[y];
                    baru[y] = temp;
                }
            }
        }
    }
    for (i = 0; i < N; i++){
        printf("%s by %s - %d\n", baru[i].nama, baru[i].artis, baru[i].view);
    }
    fclose(fp);

    return 0;
}
