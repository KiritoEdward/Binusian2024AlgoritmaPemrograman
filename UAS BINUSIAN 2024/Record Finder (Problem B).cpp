#include <stdio.h>
#include <string.h>

struct data
{
    char AccNumber[5];
    char name[21];
    int age;
    double balance;
};

struct data dt[50005];

int binarySearch(struct data dt[50005], int l, int r, char str[5])
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;
        if (strcmp(dt[mid].AccNumber, str) == 0)
        {
            return mid;
        }  
        if (strcmp(dt[mid].AccNumber, str) > 0)
        {
            return binarySearch(dt, l, mid - 1, str);
        }
        return binarySearch(dt, mid + 1, r, str);
    }
    return -1;
}

int main()
{
    int N, M, i, j, cek;
    char cari[5];
    scanf("%d", &N); getchar();
    for (i = 0; i < N; i++)
    {
        scanf("%[^,],%[^,],%d,%lf", dt[i].AccNumber, dt[i].name, &dt[i].age, &dt[i].balance);
        getchar();
    }
    
    scanf("%d", &M); getchar();
    for (i = 0; i < M; i++)
    {
        scanf("%s", cari);
        getchar();
        cek = binarySearch(dt, 0, N, cari);
        if(cek != -1)
        {
            printf("%s %d %.2lf\n", dt[cek].name, dt[cek].age, dt[cek].balance);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}
