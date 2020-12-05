#include <stdio.h>
#include <string.h>

struct simpan
{
    char name[105];
    char tgl[10];
    int keeki;
};

struct simpan sp[1005];

int main()
{
    int T, M, A, Q, i, j, k, flag;
    char tagal[10];
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%d %d", &M, &A);
        getchar();
        for (j = 1; j <= M; j++)
        {
            scanf("%s %s %d", &sp[j].name, &sp[j].tgl, &sp[j].keeki);
            getchar();
        }
        scanf("%d", &Q);
        getchar();
        printf("Case #%d:\n", i);
        for (j = 1; j <= Q; j++)
        {
            scanf("%s", &tagal);
            getchar();
            flag = 0;
            for (k = 1; k <= M; k++)
            {
                if (strcmp(tagal, sp[k].tgl) == 0 && sp[k].keeki >= A)
                {
                    printf("%s\n", sp[k].name);
                    flag = 1;
                }
                else if(k == M && flag == 0)
                {
                    printf("No one\n");
                }
            }
        }
    }

    return 0;
}