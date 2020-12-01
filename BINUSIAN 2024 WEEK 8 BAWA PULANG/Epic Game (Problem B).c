#include <stdio.h>

long long int cek = 0;

long long int epicGame(long long int N)
{
    cek++;
    if (N == 1)
        return;
    else if (N % 2 == 0)
        return epicGame(N / 2);
    else
        return epicGame(N * 3 + 1);
}

int main()
{
    long long int T, i, N;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        getchar();
        cek = 0;
        epicGame(N);
        if (cek % 2 == 1)
            printf("Case #%lld: Lili\n", i);
        else
            printf("Case #%lld: Jojo\n", i);
    }

    return 0;
}
