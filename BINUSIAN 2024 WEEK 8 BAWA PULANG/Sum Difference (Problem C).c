#include <stdio.h>

int main()
{
    unsigned long long int T, K, N, a[1505] = {0}, i, j, ok, res;
    scanf("%llu", &T);
    getchar();
    for(i = 1; i <= T; i++)
    {
        scanf("%llu %llu", &N, &K);
        getchar();
        for(j = 1; j <= N; j++)
        {
            scanf("%llu", &a[j]);
        }
        ok = 0;
        res = 0;
        for(j = 1; j <= N; j++)
        {
            if(j % K == 0) ok += a[j];
            else res += a[j];
        }
        res -= ok;
        printf("Case #%llu: %llu\n", i, res);
    }

    return 0;
}