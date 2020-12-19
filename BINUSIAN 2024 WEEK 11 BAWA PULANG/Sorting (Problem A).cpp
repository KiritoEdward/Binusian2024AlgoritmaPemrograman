#include <stdio.h>
#include<string.h>

struct data{
    char nama[55];
    int number;
};
struct data baru[55];

int main(){
    int counter, N, i, j;
    int x, y;
    struct data temp;
    scanf("%d", &counter);
    getchar();
    for (i = 1; i <= counter; i++){
        scanf("%d", &N);
        getchar();
        for (j = 0; j < N; j++){
            scanf("%[^#]#%d", &baru[j].nama, &baru[j].number);
            getchar();
        }
        for (x = 0; x < N; x++){
            for (y = N - 1; y > x; y--){
                if (baru[y].number > baru[y - 1].number){
                    temp = baru[y - 1];
                    baru[y - 1] = baru[y];
                    baru[y] = temp;
                }
                else if (baru[y].number == baru[y - 1].number){
                    if (strcmp(baru[y].nama, baru[y - 1].nama) < 0){
                        temp = baru[y - 1];
                        baru[y - 1] = baru[y];
                        baru[y] = temp;
                    }
                }
            }
        }
        printf("Case #%d:\n", i);
        for (j = 0; j < N; j++){
            printf("%s - %d\n", baru[j].nama, baru[j].number);
        }
    }
    return 0;
}
