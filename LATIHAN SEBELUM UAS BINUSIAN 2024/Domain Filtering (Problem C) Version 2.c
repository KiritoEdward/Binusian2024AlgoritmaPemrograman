#include <stdio.h>
#include <string.h>

int main(){
    int n; scanf(" %d ", &n);
    char back[n][101];
    for(int i = 0, j = 0 , k = 0; i < n; i++, k = 0, j = 0){
        char c;
        while((c = getchar()) != '\n'){
            if (c == '@' || j == 1){
                j++;
            }
            if(j == 2){
                back[i][k++] = c;
            }
        }
        back[i][k] ='\0';
    }
    char check[101]; scanf(" %s", check);
    int counter = 0;
    for(int i = 0; i < n; i++){
        if(strcmp(check, back[i]) == 0){
            counter++;
        }
    }
    printf("%d\n", counter);
}
