#include <stdio.h>
#include <string.h>

int main()
{
    long long int T, N, a, i, j, k, res, x, y, temp, z;
    long long int A[2][1001];
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        getchar();
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < N; k++)
            {
                scanf("%lld", &A[j][k]);
            }
        }
        for (z = 0; z < 2; z++)
        {
            for (x = 0; x < N; x++)
            {
                for (y = N - 1; y > x; y--)
                {
                    if (A[z][y] < A[z][y - 1])
                    {
                        temp = A[z][y];
                        A[z][y] = A[z][y - 1];
                        A[z][y - 1] = temp;
                    }
                }
            }
        }
        res = 0;
        a = N - 1;
        for (j = 0; j < N; j++)
        {
            res += A[0][j] * A[1][a];
            a--;
        }
        printf("Case #%lld: %lld\n", i, res);
    }

    return 0;
}
