#include <stdio.h>

int main()
{
    long long int K, N, i, j, a = 0, total[100005] = {0}, hasil = 0, awal = 0, batas, mulai, simpanN, ok, simpanok;
    long long int A[100005] = {0};
    scanf("%lld %lld", &K, &N);
    getchar();
    for (i = 0; i < K; i++)
    {
        scanf("%lld", &A[i]);
        getchar();
    }
    simpanN = N;
    ok = K - N;
    simpanok = ok;
    while (ok >= 0)
    {
        batas = simpanN + a;
        mulai = a;
        for (i = mulai; i < batas; i++)
        {
            total[a] += A[i];
        }
        ok--;
        a++;
    }
    for (i = 0; i <= simpanok; i++)
    {
        awal = total[i];
        if (awal > hasil)
            hasil = awal;
    }
    printf("%lld\n", hasil);

    return 0;
}
