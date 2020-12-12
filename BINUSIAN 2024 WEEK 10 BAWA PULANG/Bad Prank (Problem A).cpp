#include <stdio.h>
#include <string.h>

int main()
{
    int T, i, j, K, panjang;
    char prank[1005];
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &T);
    for (i = 1; i <= T; i++){
        fscanf(fp, "%d\n", &K);
        fscanf(fp, "%[^\n]\n", &prank);
        panjang = strlen(prank);
        for (j = 0; j < panjang; j++){
            if (prank[j] == ' '){
                continue;
            }
            if (prank[j] == 48){
                prank[j] = 79 - K;
                if (prank[j] < 65){
                    prank[j] += 32;
                }
            }
            else if (prank[j] == 49){
                prank[j] = 73 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] == 51){
                prank[j] = 69 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] == 52){
                prank[j] = 65 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] == 53){
                prank[j] = 83 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] == 54){
                prank[j] = 71 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] == 55){
                prank[j] = 84 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] == 56){
                prank[j] = 66 - K;
                if (prank[j] < 65){
                    prank[j] += 26;
                }
            }
            else if (prank[j] - K >= 65){
                prank[j] -= K;
            }
            else if (prank[j] - K < 65){
                prank[j] = prank[j] - K + 26;
            }
        }
        printf("Case #%d: %s\n", i, prank);
    }
    fclose(fp);
    return 0;
}
