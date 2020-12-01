#include <stdio.h>

int tanda = 0, tambahan = 1;

int misuteri(int N, int X)
{
    if (N <= X)
        return printf("\n");
    if (N % (2 + tanda) == 0)
    {
        printf("*");
        return misuteri(N - 1, X);
    }
    else
    {
        printf(" ");
        return misuteri(N - 1, X);
    }
}

int main()
{
    int N, X, i, asal;
    scanf("%d", &N);
    getchar();
    X = 1;
    asal = N - 1;
    if (N == 1)
    {
        printf("*\n");
        N = 0;
        X = 0;
        asal = 0;
    }
    if (N > 1)
    {
        while (N)
        {
            X *= 2;
            N--;
        }
        X--;
        N = X;
    }
    while (X)
    {
        printf("*");
        X--;
        if (X == 0)
            printf("\n");
    }
    X = 1;
    for (i = 1; i <= asal; i++)
    {
        misuteri(N, X);
        tanda += (2 * tambahan);
        X += (2 * tambahan);
        tambahan *= 2;
    }

    return 0;
}

