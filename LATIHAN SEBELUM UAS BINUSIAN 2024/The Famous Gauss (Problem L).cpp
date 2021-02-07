#include <stdio.h>

int cariTerbesar(long long int arr[], long long int n)
{
    long long int terbesar = arr[0];
    long long int i;
    for (i = 1; i < n; i++)
    {
        if (arr[i] > terbesar)
        {
            terbesar = arr[i];
        }
    }
    return terbesar;
}

void countSort(long long int arr[], long long int n, long long int exp)
{
    long long int output[n];
    long long int i, count[10] = {0};
    for (i = 0; i < n; i++)
    {
        count[(arr[i] / exp) % 10]++;
    }
    for (i = 1; i < 10; i++)
    {
        count[i] += count[i - 1];
    }
    for (i = n - 1; i >= 0; i--)
    {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void sortingRadix(long long int arr[], long long int n)
{
    long long int m = cariTerbesar(arr, n);
    long long int exp;
    for (exp = 1; m / exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);
    }
}

int cariIndeksAwal(long long int arr[], long long int l, long long int r, long long int x)
{
    long long int mid = l + (r - l) / 2;
    if (r >= l)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return cariIndeksAwal(arr, l, mid - 1, x);
        }
        return cariIndeksAwal(arr, mid + 1, r, x);
    }
    return mid;
}

int cariIndeksAkhir(long long int arr[], long long int l, long long int r, long long int x)
{
    long long int mid = l + (r - l) / 2;
    if (r >= l)
    {
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return cariIndeksAkhir(arr, l, mid - 1, x);
        }
        return cariIndeksAkhir(arr, mid + 1, r, x);
    }
    return mid - 1;
}

int main()
{
    long long int i, j, k, indeksAwal, indeksAkhir;
    long long int counter, jumlahArray, jumlahTanya, isiArray[30005] = {0}, awal, akhir, hasil, sementara, terkecil, terbesar;
    scanf("%lld", &counter);
    getchar();
    for (i = 1; i <= counter; i++)
    {
        scanf("%lld", &jumlahArray);
        getchar();
        for (j = 0; j < jumlahArray; j++)
        {
            scanf("%lld", &isiArray[j]);
        }
        getchar();
        sortingRadix(isiArray, jumlahArray);
        terkecil = isiArray[0];
        terbesar = isiArray[jumlahArray - 1];
        scanf("%lld", &jumlahTanya);
        getchar();
        printf("Case #%d:\n", i);
        for (j = 0; j < jumlahTanya; j++)
        {
            scanf("%lld %lld", &awal, &akhir);
            getchar();
            if (terbesar < awal)
            {
                printf("0\n");
            }
            else if (terbesar == awal)
            {
                hasil = 0;
                for (k = jumlahArray - 1; k > 0; k--)
                {
                    hasil += isiArray[k];
                    if (isiArray[k] != isiArray[k - 1])
                    {
                        break;
                    }
                }
                if (isiArray[0] == terbesar)
                {
                    hasil += isiArray[0];
                }
                printf("%lld\n", hasil);
            }
            else if (terkecil > akhir)
            {
                printf("0\n");
            }
            else if (terkecil == akhir)
            {
                hasil = 0;
                for (k = 0; k < jumlahArray - 1; k++)
                {
                    hasil += isiArray[k];
                    if (isiArray[k] != isiArray[k + 1])
                    {
                        break;
                    }
                }
                if (isiArray[jumlahArray - 1] == terkecil)
                {
                    hasil += terkecil;
                }
                printf("%lld\n", hasil);
            }
            else
            {
                indeksAwal = cariIndeksAwal(isiArray, 0, jumlahArray, awal);
                indeksAkhir = cariIndeksAkhir(isiArray, 0, jumlahArray, akhir);
                sementara = isiArray[indeksAwal];
                while (isiArray[indeksAwal] == sementara)
                {
                    indeksAwal--;
                    if (indeksAwal == -1)
                    {
                        break;
                    }
                }
                indeksAwal++;
                sementara = isiArray[indeksAkhir];
                while (isiArray[indeksAkhir] == sementara)
                {
                    if (indeksAkhir == jumlahArray)
                    {
                        break;
                    }
                    indeksAkhir++;
                }
                indeksAkhir--;
                hasil = 0;
                for (k = indeksAwal; k <= indeksAkhir; k++)
                {
                    hasil += isiArray[k];
                }
                printf("%lld\n", hasil);
            }
        }
    }

    return 0;
}
