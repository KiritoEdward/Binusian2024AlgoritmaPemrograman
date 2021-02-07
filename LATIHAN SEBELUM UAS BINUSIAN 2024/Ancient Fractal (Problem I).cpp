#include <stdio.h>

int main() {
    long long int awal, akhir, i;
    scanf("%lld %lld", &awal, &akhir);
    for(i = akhir; i <= akhir; i++) {
        printf("%lld %lld\n", i - ((i^(i-1)) >> 1), i);
    }
    return 0;
}
