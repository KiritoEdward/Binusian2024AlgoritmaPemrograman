#include <stdio.h>
#include <string.h>

void findAll(int n, char str[]){
    for (int x = 1; x <= n; x++){
        if (strchr(str, x + 48) == 0){
            char now[2];
            now[0] = x + 48;
            now[1] = '\0';
            char tmp[10];
            strcpy(tmp, str);
            strcat(tmp, now);
            findAll(n, tmp);
        }
    }
    if (strlen(str) == n){
        printf("%s\n", str);
    }
}

int main(){
    int counter,n;
    scanf("%d",&counter);
    for(int i=0;i<counter;i++){
    	scanf("%d",&n);
    	printf("Case #%d:\n",i+1);
    	for (int x = 1; x <= n; x++){
        	char now[2];
        	now[0] = x + 48;
        	now[1] = '\0';
        	findAll(n, now);
    	}
	}
    return 0;
}
