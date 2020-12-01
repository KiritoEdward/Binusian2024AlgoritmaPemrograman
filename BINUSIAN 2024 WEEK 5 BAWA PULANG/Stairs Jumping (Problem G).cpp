#include <stdio.h>

int main() {
    long long int t,k,n,i,j,beda,arr[100000],tinggiMaksimal,lompatMinimal;
    scanf("%lld", &t);

    for (k = 1; k <= t; k++) {
        scanf("%lld", &n);
        tinggiMaksimal = -1;
        lompatMinimal = 0;

        for (i = 0; i < n; i++) {
            scanf("%lld", &arr[i]);
        }

        for (i = 1; i < n; i++) {
            beda = arr[i] - arr[i - 1];
            if (beda > tinggiMaksimal) {
                tinggiMaksimal = beda;
            }
        }

        i = 0;
        j = 0;
        while (j < n) {
        	if(lompatMinimal==0) break;
            while ((arr[j] - arr[i] <= tinggiMaksimal) && j < n) {
                j++;
            }
            i = j - 1;
            lompatMinimal++;
        }
        printf("Case #%lld: %lld %lld\n", k, tinggiMaksimal, lompatMinimal);
    }
}
