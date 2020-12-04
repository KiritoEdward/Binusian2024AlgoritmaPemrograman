#include <stdio.h>

struct mahasiswa
{
    long long int id;
    long long int hi;
    long long int tsuki;
    long long int nen;
    char namae[105];
    char basho[105];
};

struct mahasiswa ms[105];

int main()
{
    long long int a, b, j, k;
    scanf("%lld", &a);
    getchar();
    for (j = 0; j < a; j++)
    {
        scanf("%lld %lld %lld %lld %s %s", &ms[j].id, &ms[j].hi, &ms[j].tsuki, &ms[j].nen, &ms[j].namae, &ms[j].basho);
        getchar();
    }
    scanf("%lld", &a);
    getchar();
    for (j = 1; j <= a; j++)
    {
        scanf("%lld", &b);
        getchar();
        for (k = 0; k < 105; k++)
        {
            if (b == ms[k].id)
            {
                printf("%lld. %s was born on %lld/%lld/%lld and live at %s\n", ms[k].id, ms[k].namae, ms[k].hi, ms[k].tsuki, ms[k].nen, ms[k].basho);
                break;
            }
            if(k == 104)
            {
                printf("No data found!\n");
            }
        }
    }

    return 0;
}
