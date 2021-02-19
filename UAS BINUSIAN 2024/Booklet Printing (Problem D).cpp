#include<stdio.h>
#include<math.h>

int main(){
	int t, n, sheets;
	scanf("%d", &t); getchar();
	for(int i=1; i<=t; i++){
		scanf("%d", &n); getchar();
		printf("Case #%d:\n", i);
		if(n==1){
			printf("Sheet 1, front: Blank, 1\n");
			printf("Sheet 1, back: Blank, Blank\n");
		}else{
			sheets=(n+3)/4;
			for(int j=1; j<=sheets; j++){
				if(sheets*4-(j-1)*2 <= n){
					printf("Sheet %d, front: %d, %d\n", j, sheets*4-(j-1)*2, j*2-1);	
				}else{
					printf("Sheet %d, front: Blank, %d\n", j, j*2-1);
				}
				if(sheets*4-(j-1)*2-1 <= n){
					printf("Sheet %d, back: %d, %d\n", j, j*2, sheets*4-(j-1)*2-1);
				}else{
					printf("Sheet %d, back: %d, Blank\n", j, j*2);
				}
			}
		}
	}
	return 0;
}
