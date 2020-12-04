#include <stdio.h>
#include <string.h>

struct Data
{
    long long int id;
    char title[10];
    char author[10];
    int owner;
};

int main()
{
    long long int T;
    scanf("%lld", &T);
    getchar();
    long long int n;
    for (n = 1; n <= T; n++)
    {
        long long int x, y;
        scanf("%lld", &x);
        getchar();
        struct Data Lili[x];
        for (long long int i = 0; i < x; i++)
        {
            scanf("%lld %s %s", &Lili[i].id, &Lili[i].title, &Lili[i].author);
            getchar();
            Lili[i].owner = 0;
        }
        scanf("%lld", &y);
        getchar();
        struct Data Bibi[y];
        for (long long int i = 0; i < y; i++)
        {
            scanf("%lld %s %s", &Bibi[i].id, &Bibi[i].title, &Bibi[i].author);
            getchar();
            Bibi[i].owner = 1;
        }
        struct Data Rak[x + y];
        long long int i = 0, j = 0, k = 0;
        while (i < x && j < y)
        {
            if (Lili[i].id < Bibi[j].id)
            {
                Rak[k++] = Lili[i++];
            }
            else if (Lili[i].id > Bibi[j].id)
            {
                Rak[k++] = Bibi[j++];
            }
            else if (Lili[i].id == Bibi[j].id)
            {
                long long int flag = strcmp(Lili[i].title, Bibi[j].title);
                if (flag > 0)
                    Rak[k++] = Bibi[j++];
                else
                    Rak[k++] = Lili[i++];
            }
        }
        while (i < x)
        {
            Rak[k++] = Lili[i++];
        }
        while (j < y)
        {
            Rak[k++] = Bibi[j++];
        }

        printf("Case #%lld:\n", n);
        for (i = 0; i < x + y; i++)
            if (Rak[i].owner == 1)
                printf("%lld\n", i + 1);
    }

    return 0;
}
