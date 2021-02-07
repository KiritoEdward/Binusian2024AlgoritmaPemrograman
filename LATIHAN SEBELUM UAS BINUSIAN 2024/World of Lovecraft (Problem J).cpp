#include <stdio.h>
#define max(a, b) (a > b) ? a : b

long long int jojoBackpack(long long int batasMaksimal, long long int beratItem[], long long int nilaiItem[], long long int indeksItem)
{
    if (batasMaksimal == 0 || indeksItem == 0)
    {
        return 0;
    }
    if (beratItem[indeksItem - 1] > batasMaksimal)
    {
        return jojoBackpack(batasMaksimal, beratItem, nilaiItem, indeksItem - 1);
    }
    return max(jojoBackpack(batasMaksimal, beratItem, nilaiItem, indeksItem - 1),jojoBackpack(batasMaksimal - beratItem[indeksItem - 1], beratItem, nilaiItem, indeksItem - 1) + nilaiItem[indeksItem - 1]);
}

int main()
{
    long long int counter, n, maksimalBerat, nilai[21], berat[21], i, j;
    scanf("%lld", &counter);
    getchar();
    for (i = 0; i < counter; i++)
    {
        scanf("%lld %lld", &n, &maksimalBerat);
        getchar();
        for (j = 0; j < n; j++)
        {
            scanf("%lld %lld", &nilai[j], &berat[j]);
            getchar();
        }
        printf("Case #%lld: %lld\n", i+1, jojoBackpack(maksimalBerat, berat, nilai, n));
    }

    return 0;
}
