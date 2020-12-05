#include <stdio.h>
#include <math.h>
#include <string.h>

struct seitou
{
    char id[15];
    char S[105];
    double res;
};

struct seitou st[50005];

int main()
{
    long long int T, i, j;
    double mean;
    scanf("%lld", &T);
    getchar();
    mean = 0;
    for (i = 1; i <= 50005; i++)
    {
        st[i].res = 0;
    }
    for (i = 1; i <= T; i++)
    {
        scanf("%s", &st[i].id);
        getchar();
        scanf("%[^\n]", &st[i].S);
        getchar();
        scanf("%lf", &st[i].res);
        getchar();
    }
    for (i = 1; i <= 50005; i++)
    {
        mean += st[i].res;
    }
    mean = ceil(mean / T);
    for (i = 1; i < 50005; i++)
    {
        if (st[i].res >= mean)
        {
            printf("%s %s\n", st[i].id, st[i].S);
        }
    }

    return 0;
}