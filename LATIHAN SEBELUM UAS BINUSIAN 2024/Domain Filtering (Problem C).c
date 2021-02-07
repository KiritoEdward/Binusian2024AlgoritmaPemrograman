#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, ketemuSama;
    char email[101], domain[1001][101], searchDomain[101];
    scanf("%d", &N); getchar();
    
    for (i = 0; i < N; i++)
    {
        scanf("%[^\n]", email);
        getchar();
        char *token = strtok(email, "@");
        token = strtok(NULL, "@");
        strcpy(domain[i], token);
    }
    scanf("%[^\n]", searchDomain); getchar();
    ketemuSama = 0;
    for (i = 0; i < N; i++)
    {
        if (strcmp(searchDomain, domain[i]) == 0)
        {
            ketemuSama++;
        }
    }
    printf("%d\n", ketemuSama);

    return 0;
}
