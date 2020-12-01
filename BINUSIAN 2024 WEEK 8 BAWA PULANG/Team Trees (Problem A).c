#include <stdio.h>

int main()
{
    long long int T, N, A[100005] = {0}, i, j, res;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        getchar();
        for (j = 0; j < N; j++)
        {
            scanf("%lld", &A[j]);
        }
        res = 0;
        for(j = 0; j < N; j++)
        {
            res += A[j];
        }
        printf("Case #%lld: %lld\n", i, res);
    }

    return 0;
}