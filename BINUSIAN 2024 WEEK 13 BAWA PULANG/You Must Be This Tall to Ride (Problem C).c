#include <stdio.h>

long long int lo(long long int arr[], long long int l, long long int r, long long int x)
{
    long long int mid;
    mid = l + (r - l) / 2;
    if (r >= l)
    {
        if (arr[mid] == x)
        {
            mid--;
            return mid;
        }
        if (arr[mid] > x)
        {
            return lo(arr, l, mid - 1, x);
        }
        return lo(arr, mid + 1, r, x);
    }
    mid--;
    return mid;
}

long long int hi(long long int arr[], long long int l, long long int r, long long int x)
{
    long long int mid;
    mid = l + (r - l) / 2;
    if (r >= l)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return hi(arr, l, mid - 1, x);
        }
        return hi(arr, mid + 1, r, x);
    }
    mid--;
    return mid;
}

int main()
{
    long long int N, Q, i, j, x, y, res;
    long long int A[30001], B, C;
    scanf("%lld", &N);
    getchar();
    for (i = 1; i <= N; i++)
    {
        scanf(" %lld", &A[i]);
    }
    getchar();
    scanf("%lld", &Q);
    getchar();
    for (i = 1; i <= Q; i++)
    {
        scanf("%lld %lld", &B, &C);
        getchar();
        x = lo(A, 1, N, B);
        y = hi(A, 1, N, C);
        if(x < 0)
        {
            x = 0;
        }
        res = y - x;
        printf("Case #%lld: %lld\n", i, res);
    }

    return 0;
}