#include <stdio.h>
#include <string.h>

void fibonacciString(char *First, char *Second, char *output, int n, int cur){
    if (cur == n){
        return;
    }else{
        strcpy(output, Second);
        strcat(output, First);
        strcpy(First, Second);
        strcpy(Second, output);
        fibonacciString(First, Second, output, n, cur + 1);
    }
}

int main(){
    long long int counter;
    scanf("%lld", &counter);
    long long int count = 1;
    while (count <= counter){
        long long int n;
        char a, b;
        scanf("%lld %c %c", &n, &a, &b);

        char tempFirst[1000], tempSecond[1000];
        tempFirst[0] = a;
        tempFirst[1] = '\0';
        tempSecond[0] = b;
        tempSecond[1] = '\0';

        char output[1000];
        
		if(n==1){
			printf("Case #%lld: %c\n", count, b);
		}else{
			fibonacciString(tempFirst, tempSecond, output, n, 1);
			printf("Case #%lld: %s\n", count, output);
		}
        
        count++;
    }
}
