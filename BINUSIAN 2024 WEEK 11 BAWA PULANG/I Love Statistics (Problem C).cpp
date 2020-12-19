#include <stdio.h>

void sort(double arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                double temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    long long int T, N, i, j;
    double A[5005], median, res;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++)
    {
        scanf("%lld", &N);
        getchar();
        res = 0;
        for (j = 1; j <= N; j++)
        {
            scanf("%lf", &A[j]);
            res += A[j];
        }
        res /= N;
        sort(A, N);
        if (N % 2 == 1)
        {
            N = N / 2 + 1;
            median = A[N];
        }
        else
        {
            N /= 2;
            median = (A[N] + A[N + 1]) / 2;
        }
        printf("Case #%lld:\n", i);
        printf("Mean : %.2lf\n", res);
        printf("Median : %.2lf\n", median);
    }

    return 0;
}
