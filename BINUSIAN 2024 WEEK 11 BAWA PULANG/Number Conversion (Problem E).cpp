#include <stdio.h>

void sorting(int arr[], int n){
    int i, j;
    for (i = 0; i < n; i++){
        for (j = n - 1; j > i; j--){
            if (arr[j] < arr[j - 1]){
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main(){
    int i, j, k;
    int T, N, ok, array[1005], temp[1005], res[1005], idx;
    scanf("%d", &T);
    getchar();
    for (i = 1; i <= T; i++){
        scanf("%d", &N);
        getchar();
        for(j = 0; j < N; j++){
            scanf("%d", &array[j]);
            temp[j] = array[j];
        }
        sorting(array, N);
        idx = 1;
        for (j = 0; j < N; j++){
            ok = 0;
            for (k = 0; k < N; k++){
                if (array[j] == temp[k]){
                    ok = 1;
                    res[k] = idx;
                    temp[k]--;
                }
            }
            if (ok){
                idx++;
            }
        }
        printf("Case #%d:", i);
        for(j = 0; j < N; j++){
            printf(" %d", res[j]);
        }
        printf("\n");
    }
    return 0;
}
