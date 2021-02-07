#include <stdio.h>
#include <string.h>

struct fizzbuzz {
    char *result[100005];
};

int main() {
    
 long long int n, k;
    scanf("%lld %lld\n", &n, &k);
    
 char sequence[k];
    for (long long int i = 0; i < k; i++) {
        scanf("%c", &sequence[i]);
    }
    
    long long int arr[k];
    for (long long int i = 0; i < k; i++) {
        scanf("%d", &arr[i]);
    }
    
    struct fizzbuzz fz[1];
    for (long long int i = 0; i < n; i++) {
        char digit[2];
        digit[0] = '0' + (i + 1) % 10;
        digit[1] = 0;
        fz[0].result[i] = strdup(digit);
    }
    
 for (long long int i=0; i<k; i++) {
        for (long long int j = arr[i]; j <= (n / arr[i]) * arr[i]; j += arr[i]) {
         char temp[2], temp2[50005];
            if (fz[0].result[j - 1][0] >= '0' && fz[0].result[j - 1][0] <= '9') {
                temp[0] = sequence[i];
                temp[1] = 0;
                fz[0].result[j - 1] = strdup(temp);
            } else {
                temp[0] = sequence[i];
                temp[1] = 0;
                temp2[0] = 0;
                strcat(temp2, fz[0].result[j - 1]);
                strcat(temp2, temp);
                fz[0].result[j - 1] = strdup(temp2);
            }
        }
    }
    
    for (long long int i = 0; i < n; i++) {
        printf("%s\n", fz[0].result[i]);
    }
    
    return 0;
}
