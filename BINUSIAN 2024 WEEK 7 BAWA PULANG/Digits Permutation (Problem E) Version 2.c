#include <stdio.h>

long long int fact(long long int N)
{
    if (N == 1)
        return 1;
    else
        return (fact(N - 1) * N);
}

int main()
{
    long long int T, N, i, j, k, A[15] = {0}, temp, save;
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
        temp = 0;
        save = fact(N);
        if (N == 1)
        {
            printf("Case #%lld: %lld\n", i, A[0]);
        }
        else if (N == 2)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 10 + A[k];
            save /= 2;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 3)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 100 + A[k] * 10 + A[k];
            save /= 3;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 4)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 4;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 5)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 10000 + A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 5;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 6)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 100000 + A[k] * 10000 + A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 6;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 7)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 1000000 + A[k] * 100000 + A[k] * 10000 + A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 7;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 8)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 10000000 + A[k] * 1000000 + A[k] * 100000 + A[k] * 10000 + A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 8;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 9)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 100000000 + A[k] * 10000000 + A[k] * 1000000 + A[k] * 100000 + A[k] * 10000 + A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 9;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
        else if (N == 10)
        {
            for (k = 0; k < N; k++)
                temp += A[k] * 1000000000 + A[k] * 100000000 + A[k] * 10000000 + A[k] * 1000000 + A[k] * 100000 + A[k] * 10000 + A[k] * 1000 + A[k] * 100 + A[k] * 10 + A[k];
            save /= 10;
            temp *= save;
            printf("Case #%lld: %lld\n", i, temp);
        }
    }

    return 0;
}