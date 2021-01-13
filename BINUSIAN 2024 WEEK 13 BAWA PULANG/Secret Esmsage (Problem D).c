#include <stdio.h>

int main(){
    int n, i; scanf(" %d", &n);
    char arr[n+1];
    scanf(" %[^\n]", arr);
    for(i = 0; i < n; i++){
        int check; scanf(" %d", &check);
        printf("%c", arr[check - 1]);
    }
    puts("");
}
