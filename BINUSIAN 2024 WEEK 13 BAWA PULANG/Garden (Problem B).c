#include <stdio.h>

int main()
{
    int n; scanf(" %d",&n);
    int arr[n][n];
    int i, j, k, l;
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf(" %d", &arr[i][j]);
        }
    }
    int m; scanf(" %d", &m);
    long long int max = 0;
    for(i = 0; i <= n-m; i++){
        for (k = 0; k <= n-m; k++){
            long long int sum = 0;
            for (j = i; j < i + m; j++) {
                for (l = k; l < k + m; l++) {
                    sum += arr[j][l];
                }
            }
            if (max < sum) {
                max = sum;
            }
        }
    }
    printf("%lld\n", max);
    return 0;
}
