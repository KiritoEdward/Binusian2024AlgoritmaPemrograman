#include <stdio.h>

int main()
{
    unsigned long long int M, i, X;
    scanf("%llu", &M);
    getchar();
    unsigned long long int a[M], b[M], c[M], N[M], F = 0;
    for (i = 0; i < M; i++)
    {
        scanf("%llu", &a[i]);
    }
    for (i = 0; i < M; i++)
    {
        scanf("%llu", &b[i]);
    }
    for (i = 0; i < M; i++)
    {
        scanf("%llu", &c[i]);
    }
    for (i = 0; i < M; i++)
    {
        scanf("%llu", &N[i]);
    }
    i = 0;
    X = 1;
    while (M > 0)
    {
        F = 0;
        while (F < N[i])
        {
            F = a[i] * X * X * X + b[i] * X * X + c[i] * X;
            if(F == N[i])
            {
                printf("%llu\n", X);
            }
            else if(F >= N[i])
            {
                break;
            }
            else
            {
                X += 25;
            } 
        }
        X--;
        while(F > N[i])
        {
            F = a[i] * X * X * X + b[i] * X * X + c[i] * X;
            if(F > N[i])
            {
                X--;
            }
            else
            {
                printf("%llu\n", X);
            }
        }
        M--;
        i++;
        X = 1;
    }

    return 0;
}
