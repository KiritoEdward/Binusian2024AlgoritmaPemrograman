#include <stdio.h>
#include <string.h>

struct hito
{
    char namae[105];
};

struct hito ht[1005];

int main()
{
    int T, i, j = 0, aru[1005] = {0}, res, cek, a;
    char temp[105];
    scanf("%d", &T);
    getchar();
    res = 0;
    for (i = 0; i < T; i++)
    {
        scanf("%[^\n]", &ht[i].namae);
        getchar();
    }
    for (i = 0; i < T; i++)
    {
        a = i;
        cek = 1;
        if (strcmp(ht[i].namae, "!!") == 0)
            cek = 0;
        else
            strcpy(temp, ht[i].namae);
        if (cek == 1)
        {
            for (j = 1 + a; j < T; j++)
            {
                if (strcmp(temp, ht[j].namae) == 0)
                {
                    aru[i] = 1;
                    break;
                }
            }
            for (j = 1 + a; j < T; j++)
            {
                if (strcmp(temp, ht[j].namae) == 0)
                {
                    strcpy(ht[j].namae, "!!");
                }
            }
        }
        strcpy(ht[i].namae, "!!");
    }
    for(i = 0; i < 1005; i++)
    {
        res += aru[i];
    }
    printf("You have %d duplicate name(s).\n", res);

    return 0;
}