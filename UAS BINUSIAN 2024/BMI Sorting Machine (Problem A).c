#include <stdio.h>

struct data
{
    int ID;
    char nama[21];
    int feet;
    int inch;
    double real;
};

struct data dt[50005];
struct data temp;

int binarySearch(struct data dt[50005], int l, int r, double x)
{
    int mid = l + (r - l) / 2;
    if (r >= l)
    {
        if (dt[mid].real == x)
        {
            return mid;
        }
        if (dt[mid].real > x)
        {
            return binarySearch(dt, l, mid - 1, x);
        }
        return binarySearch(dt, mid + 1, r, x);
    }
    return mid - 1;
}

void merge(struct data dt[50005], int l, int m, int r)
{
    int x, y, z;
    int n1 = m - l + 1;
    int n2 = r - m;
    struct data L[n1], R[n2];
    for (x = 0; x < n1; x++)
    {
        L[x] = dt[l + x];
    }
    for (y = 0; y < n2; y++)
    {
        R[y] = dt[m + 1 + y];
    }
    x = 0;
    y = 0;
    z = l;
    while (x < n1 && y < n2)
    {
        if (L[x].real < R[y].real)
        {
            dt[z] = L[x];
            x++;
        }
        else if (L[x].real > R[y].real)
        {
            dt[z] = R[y];
            y++;
        }
        else
        {
            if (L[x].ID > R[y].ID)
            {
                dt[z] = L[x];
                x++;
            }
            else
            {
                dt[z] = R[y];
                y++;
            }
        }
        z++;
    }
    while (x < n1)
    {
        dt[z] = L[x];
        x++;
        z++;
    }
    while (y < n2)
    {
        dt[z] = R[y];
        y++;
        z++;
    }
}

void mergeSort(struct data dt[50005], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(dt, l, m);
        mergeSort(dt, m + 1, r);
        merge(dt, l, m, r);
    }
}

int main()
{
    int N, M, i, j, idx;
    double x;
    scanf("%d", &N); getchar();
    for (i = 0; i < N; i++)
    {
        scanf("%d,%[^,],%d %d", &dt[i].ID, dt[i].nama, &dt[i].feet, &dt[i].inch);
        getchar();
        dt[i].inch += dt[i].feet * 12;
        dt[i].real = dt[i].inch * 2.54;
    }
    mergeSort(dt, 0, N - 1);
    scanf("%d", &M); getchar();
    for (i = 1; i <= M; i++)
    {
        scanf("%lf", &x); getchar();
        idx = binarySearch(dt, 0, N, x);
        printf("Q%d:\n", i);
        if (idx != -1)
        {
            for (j = idx; j >= 0; j--)
            {
                printf("%d %s %.2lf\n", dt[j].ID, dt[j].nama, dt[j].real);
            }
        }
        else
        {
            printf("-1\n");
        }
    }
    return 0;
}
