#include <stdio.h>

int main()
{
    long long int awal, akhir, i, sementara;
    scanf("%lld %lld", &awal, &akhir); getchar();
    if (awal % 2 == 0)
    {
        i = awal;
        awal = awal & (awal - 1);
        sementara = 1;
        awal++;
        while (i <= akhir)
        {
            if (sementara == 0)
            {
                if (i % 2 == 0)
                {
                    if (awal != 1)
                    {
                        awal = awal & i;
                    }
                    if (awal != 1)
                    {
                        awal++;
                    }
                }
                else
                {
                    awal = awal | i;
                }
            }
            else
            {
                sementara = 0;
            }
            printf("%lld %lld\n", awal, i);
            i++;
        }
    }
    else
    {
        i = awal;
        while (i <= akhir)
        {
            if (i % 2 == 0)
            {
                if (awal != 1)
                {
                    awal = awal & i;
                }
                if (awal != 1)
                {
                    awal++;
                }
            }
            else
            {
                awal = awal | i;
            }
            printf("%lld %lld\n", awal, i);
            i++;
        }
    }

    return 0;
}
