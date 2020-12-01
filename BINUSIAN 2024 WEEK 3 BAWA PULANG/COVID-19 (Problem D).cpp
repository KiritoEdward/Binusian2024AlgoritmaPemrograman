#include <stdio.h>

int main()
{
    int T, N, K, A[10000] = {0}, i, j, total;
    scanf("%d", &T); getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%d %d", &N, &K); getchar();
        for (j = 1; j <= N; j++)
        {
            scanf("%d", &A[j]); getchar();
        }
        while(K > 0)
        {
            total += A[N];
            K--;
            N--;
        }
        printf("Case #%d: %d\n", i, total);
        total = 0;
    }
    return 0;
}
