#include <stdio.h>

int main(){
	int a, b,i,j; scanf("%d %d", &a, &b);
	char p; long long int total = 0;
	for(i = 0; i < a; i++){
		for(j = 0; j < b; j++){
			scanf("%c", &p);
			if(p == '.'){
				total++;
			}
		}
	}
	printf("%d\n", total+1);
}
