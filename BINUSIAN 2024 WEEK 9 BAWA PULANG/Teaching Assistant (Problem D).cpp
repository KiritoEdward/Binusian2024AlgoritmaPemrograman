#include <stdio.h>
#include <string.h>

struct orang{
    char nama[20];
};

int convert(char ht[])
{
    int i, num = 0;
    for (i = 0; i < strlen(ht); i++)
    {
        num = num * 10 + ht[i] - '0';
    }
    return num;
}

int main()
{
    int T, N, i, j, k;
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        getchar();
        struct orang data[N];
        int group[N];
        char temp[3];
        for (j = 0; j < N; j++)
        {
            scanf(" %[^ ]*c", &data[j].nama);
            scanf(" %[^\n]*c", &temp);
            group[j] = convert(temp);
        }
        printf("Case #%d:\n", i);
        int grupSama = 0;
        for (j = 1; j <= 20; j++)
        {
            grupSama = 0;
            for (k = 0; k < N; k++)
            {
                if (group[k] == j)
                    grupSama++;
            }
            if (grupSama > 0)
            {
                printf("Group %d(%d):\n", j, grupSama);
                for (k = 0; k < N; k++)
                {
                    if (group[k] == j)
                        printf("%s\n", data[k].nama);
                }
            }
        }
    }

    return 0;
}
