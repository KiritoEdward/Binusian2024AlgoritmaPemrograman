#include <stdio.h>

int main()
{
    long long int jumlahArray;
	long long int i, j;
    scanf("%lld", &jumlahArray); getchar();
    
    long long int arrayShuffle[jumlahArray] = {0};
    for (i = 0; i < jumlahArray; i++)
    {
        scanf("%lld", &arrayShuffle[i]);  getchar();
    }
    
    long long int arrayOriginal[jumlahArray] = {0};
    for (j = 0; j < jumlahArray; j++)
    {
        scanf("%lld", &arrayOriginal[j]); getchar();
    }
    long long int jumlahSwap = 0, temp = 0, x, y, z;
    for (x = 0; x < jumlahArray; x++)
    {
        for (y = 0; y < jumlahArray; y++)
        {
            if(arrayOriginal[x] == arrayShuffle[y] && x != y)
            {
                for(z = y; z > x; z--)
                {
                    temp = arrayShuffle[z];
                    arrayShuffle[z] = arrayShuffle[z - 1];
                    arrayShuffle[z - 1] = temp;
                    jumlahSwap++;
                }
            }
        }
    }
    printf("%lld\n", jumlahSwap);

    return 0;
}
