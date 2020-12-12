#include <stdio.h>
#include <string.h>

int main(){
    long long int panjang, N, x, i, j;
    char str[205];
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &N);
    for(i = 1; i <= N; i++){
        fscanf(fp, "%s\n", &str);
        panjang = strlen(str);
        x = 0;
        for(j = 0; j < panjang; j++){
            x += str[j] - 48;
        }
        if(x % 3 == 0 && (str[panjang - 1] - 48) % 2 == 0){
            printf("Case #%d: YES\n", i);
        }
		else{
            printf("Case #%d: NO\n", i);
        }
    }
    fclose(fp);
    return 0;
}
