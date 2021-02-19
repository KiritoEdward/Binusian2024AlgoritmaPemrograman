#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp = fopen("testdata.in", "r");
    int N, i, res, cip;
    char ID[55][5], nama[55][25], se[5];
    int harga[55];
    res = 0;
    cip = 0;
    fscanf(fp, "%d\n", &N);
    for(i = 0; i < N; i++)
    {
        fscanf(fp, "%[^,],%[^,],%d\n", ID[i], nama[i], &harga[i]);
    }
    fscanf(fp, "%s\n", se);
    for(i = 0; i < N; i++)
    {
        if(strcmp(se, ID[i]) == 0)
        {
            printf("%s %s %d\n", ID[i], nama[i], harga[i]);
            res += harga[i];
            cip++;
        }
    }
    printf("Total Recipients: %d\n", cip);
    printf("Total Amount: %d\n", res);
    fclose(fp);
    
    return 0;
}
