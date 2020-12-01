#include <stdio.h>

int main()
{
    long long int c, f0, f1, res, K, i;
    scanf("%lld %lld", &f0, &f1);
    getchar();
    scanf("%lld", &K);
    getchar();
    for(i = 1; i < K; i++)
    {
        c = f0 + f1;
        res = c;
        f0 = f1;
        f1 = c;
    }
    printf("%lld\n", res);

    return 0;
}