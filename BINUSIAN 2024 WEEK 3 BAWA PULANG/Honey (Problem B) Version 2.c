#include <stdio.h>

int main()
{
    int A, B, T, i, count, left = 0;
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%d %d", &A, &B);
        getchar();
        count = A;
        while(A >= B)
        {
            A -= B;
            count++;
            A++;
        }
        printf("Case #%d: %d\n", i, count);
        count = 0;
    }
    return 0;
}