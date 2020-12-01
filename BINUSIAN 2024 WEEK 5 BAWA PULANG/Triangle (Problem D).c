#include <stdio.h>

int main()
{
    int T, N, i, a, b, simpan;
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        simpan = 0;
        scanf("%d", &N);
        getchar();
        printf("Case #%d:\n", i);
        simpan = N;
        for (a = 1; a <= N; a++)
        {
            for (b = 1; b <= N; b++)
            {
                if (b < simpan)
                    printf(" ");
                else if ((a + b) % 2 == 0)
                {
                    printf("*");
                }
                else if ((a + b) % 2 == 1)
                {
                    printf("#");
                }
            }
            simpan--;
            printf("\n");
        }
    }
    return 0;
}
