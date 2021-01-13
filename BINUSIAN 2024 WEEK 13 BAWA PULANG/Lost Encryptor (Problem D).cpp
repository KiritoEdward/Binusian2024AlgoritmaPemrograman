#include <stdio.h>

int main(){
    int n; scanf(" %d", &n);
    char arr[n+1];
    int list[n];
    scanf(" %[^\n]", arr);
    for(int i = 0; i < n; i++){
        char check; scanf(" %c", &check);
        for (int j = 0; j < n; j++){
            if(arr[j] == check){
                list[j] = i + 1;
            }
        }
    }
    printf("%d", list[0]);
    for(int i = 1; i < n; i++){
        printf(" %d", list[i]);
    }
    puts("");
}
