#include <stdio.h>
#include <math.h>

struct data
{
    int A;
    int B;
};
struct data divisorSort[10005];
struct data sementara;

int jumlahDivisor(int angka)
{
    int i;
    int totalDivisor = 1;
    for (i = 2; i <= sqrt(angka); i++)
    {
        if (angka % i == 0)
        {
            if (i == (angka / i))
                totalDivisor += i;
            else
                totalDivisor += (i + angka / i);
        }
    }
    return (totalDivisor + angka);
}

int main()
{
    int jumlahElemen, i, x, y;
    scanf("%d", &jumlahElemen);
    getchar();
    for (i = 0; i < jumlahElemen; i++)
    {
        scanf("%d", &divisorSort[i].A);
    }
    getchar();
    for (x = 0; x < jumlahElemen; x++)
    {
        divisorSort[x].B = jumlahDivisor(divisorSort[x].A);
    }
    for (x = 0; x < jumlahElemen; x++)
    {
        for (y = jumlahElemen - 1; y > x; y--)
        {
            if (divisorSort[y].B < divisorSort[y - 1].B)
            {
                sementara = divisorSort[y];
                divisorSort[y] = divisorSort[y - 1];
                divisorSort[y - 1] = sementara;
            }
            else if (divisorSort[y].B == divisorSort[y - 1].B)
            {
                if (divisorSort[y].A < divisorSort[y - 1].A)
                {
                    sementara = divisorSort[y];
                    divisorSort[y] = divisorSort[y - 1];
                    divisorSort[y - 1] = sementara;
                }
            }
        }
    }
    for (i = 0; i < jumlahElemen; i++)
    {
        printf("%d", divisorSort[i].A);
        if (i != jumlahElemen - 1)
        {
            printf(" ");
        }
        else
        {
            printf("\n");
        }
    }

    return 0;
}
