#include <stdio.h>

int main()
{
    int N, A[1005] = {0}, b = 1;
    scanf("%d", &N); getchar();
    A[N+1] = 1000000000;
    for(b = 1 ; b <= N; b++)
    {
        scanf("%d", &A[b]); getchar();
    }
    for(b = 1; b <= N; b++)
    {
        if(A[b] > A[b+1])
        {
            printf("%d", A[b]);
        }
        if(A[b] == 1 && b > 1)
        {
            printf(" ");
        }
        if(A[b] == A[b+1])
        {
            printf("%d", A[b]);
        }
        if(N == b)
        {
            printf("%d", A[b]);
        }      
    }
    printf("\n");
    return 0;
}