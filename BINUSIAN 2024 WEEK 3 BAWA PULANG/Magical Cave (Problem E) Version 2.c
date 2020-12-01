#include <stdio.h>

int main()
{
    long long int T, N, A[10000] = {0}, Z = 1, Nyawa = 0, Hasil = 0, simpan = 0, simpan2 = 0, i = 1;
    scanf("%lld", &T); getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N); getchar();
        Nyawa = 0;
        simpan = 0;
        simpan2 = 0;
        for (Z = 1; Z <= N; Z++)
        {
            scanf("%lld", &A[Z]); getchar();
        }
        printf("Case #%lld: ", i);
        for(Z = 1; Z <= N; Z++)
        {
            if(A[Z] > 0 || A[Z] == 0)
            {
                Nyawa += A[Z];
            }
            else if(A[Z] < 0 || A[Z] == 0)
            {
                Nyawa = Nyawa + A[Z];
                simpan = Nyawa;
                while(simpan <= 0)
                {
                    Nyawa++;
                    simpan++;
                    simpan2++;
                }
            }
        }
        if(simpan2 == 0) simpan2++;
        printf("%lld\n", simpan2);
    }
    return 0;
}