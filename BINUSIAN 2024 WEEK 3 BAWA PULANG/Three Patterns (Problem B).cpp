#include <stdio.h>

int main()
{
    int N, K;
    scanf("%d %d", &N, &K);
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
    for (int k = 1; k <= N; k++)
    {
        for (int l = 1; l <= N; l++)
        {
            if(k%K == 0)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }
        }
        printf("\n");
    }
    printf("\n");
    for (int m = 1; m <= N; m++)
    {
        for (int n = 1; n <= N; n++)
        {
            if(n%K == 0)
            {
                printf("#");
            }
            else
            {
                printf(".");
            }   
        }
        printf("\n");    
    }
    return 0;  
}
