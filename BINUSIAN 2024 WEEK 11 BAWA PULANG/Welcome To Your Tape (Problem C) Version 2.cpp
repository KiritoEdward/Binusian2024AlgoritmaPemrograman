#include <stdio.h>
#include <string.h>

int main(){
    int T, N, K, i, j, x, y;
    char nama[105][105];
    char temp[105];
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%d %d", &N, &K);
        getchar();
        K--;
        for (j = 0; j < N; j++)
        {
            scanf("%[^\n]", &nama[j]);
            getchar();
        }
        for (x = 0; x < N; x++)
        {
            for (y = N - 1; y > x; y--)
            {
                if (strcmp(nama[y], nama[y - 1]) < 0)
                {
                    strcpy(temp, nama[y - 1]);
                    strcpy(nama[y - 1], nama[y]);
                    strcpy(nama[y] ,temp);
                }
            }
        }
        printf("Case #%d: %s\n", i, nama[K]);
    }
    return 0;
}
