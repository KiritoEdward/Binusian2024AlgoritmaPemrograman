#include <stdio.h>

int main()
{
    long long int T, N, A[1005] = {0}, B[1005] = {0}, i, j, k, puas, ok, cari, kali, sip;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        getchar();
        puas = N;
        for (k = 0; k < N; k++)
        {
            scanf("%lld", &A[k]);
        }
        for (k = 0; k < N; k++)
        {
            scanf("%lld", &B[k]);
        }
        sip = 0;
        cari = 1;
        kali = 0;
        while (cari)
        {
            ok = 0;
            for (k = 0; k < N; k++)
            {
                if (B[k] > A[k])
                    ok++;
            }
            if (sip < ok)
                sip = ok;
            if (kali == N - 1)
                break;
            if (sip != N && kali < N)
            {
                long long int ne, temp;
                temp = B[0];
                for (ne = 0; ne < N - 1; ne++)
                {
                    B[ne] = B[ne + 1];
                }
                B[N - 1] = temp;
                kali++;
            }
            else
                break;
        }
        printf("Case #%lld: %lld\n", i, puas + sip);
    }

    return 0;
}