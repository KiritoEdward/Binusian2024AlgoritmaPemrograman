#include <stdio.h>

int main()
{
    long long int T, N, batas, i, j, aman, banyak, bisa;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        long long int aman[100005] = {0};
        scanf("%lld", &N);
        getchar();
        long long int x[100005] = {0}, y[100005] = {0};
        banyak = 0;
        bisa = 0;
        for (j = 0; j < N; j++)
        {
            scanf("%lld %lld", &x[j], &y[j]);
            getchar();
            if (j > 0)
            {
                if (x[j] < banyak)
                {
                    aman[j] = 1;
                    aman[j - 1] = 1;
                }
            }
            else
            {
                banyak = y[j];
            }
            if (y[j] > banyak)
                banyak = y[j];
        }
        for (j = 0; j < N; j++)
        {
            if (aman[j] == 0)
                bisa++;
        }
        printf("Case #%lld: %lld\n", i, bisa);
    }
    return 0;
}