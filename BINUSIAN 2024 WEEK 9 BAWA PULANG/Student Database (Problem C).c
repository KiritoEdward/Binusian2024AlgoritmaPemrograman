#include <stdio.h>
#include <string.h>

struct neko
{
    char id[25];
    char name[105];
    int age;
};

struct neko nk[1005];

int main()
{
    int N, T, i;
    scanf("%d", &N);
    getchar();
    for (i = 1; i <= N; i++)
    {
        scanf("%s", &nk[i].id);
        getchar();
        scanf("%[^\n]", &nk[i].name);
        getchar();
        scanf("%d", &nk[i].age);
        getchar();
    }
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%d", &N);
        getchar();
        printf("Query #%d:\n", i);
        printf("ID: %s\n", nk[N].id);
        printf("Name: %s\n", nk[N].name);
        printf("Age: %d\n", nk[N].age);
    }

    return 0;
}