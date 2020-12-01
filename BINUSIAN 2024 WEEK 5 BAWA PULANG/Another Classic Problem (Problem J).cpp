#include <stdio.h>

long long int gcd(long long int a, long long int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    long long int T, i;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        long long int a, b, c, l, r, n, n1, sn, sn1, cari = 0, count = 0;
        scanf("%lld %lld %lld %lld %lld", &a, &b, &c, &l, &r);
        getchar();
        long long int lcm = (a * b) / gcd(a, b);
        lcm = (lcm * c) / gcd(lcm, c);

        long long int un = lcm;
        while(un < l)
        {
            un += lcm;
            cari++;
        }

        n = (r / lcm) - cari;
        
        sn = (n * (2*un + (n-1)*lcm))/2;

        printf("Case #%lld: %lld\n", i, sn);
    }
    return 0;
}
