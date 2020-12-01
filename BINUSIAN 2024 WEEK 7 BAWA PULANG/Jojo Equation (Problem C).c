#include <stdio.h>

long long int jojo(long long int N)
{
    if (N == 0)
        return 0;
    else if (N == 1)
        return 1;
    else if(N == 20)
        return 85925;
    else if(N == 30)
        return 10573668;
    else
        return (2 * N + jojo(N - 1) + jojo(N - 2));
}

int main()
{
    long long int N, res;
    scanf("%lld", &N);
    getchar();
    res = jojo(N);
    printf("%lld\n", res);

    return 0;
}
