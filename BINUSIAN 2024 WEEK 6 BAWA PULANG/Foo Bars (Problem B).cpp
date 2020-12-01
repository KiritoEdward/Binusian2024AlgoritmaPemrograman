#include <stdio.h>

int main(){
	int n; scanf(" %d",&n);
	for(int i=0; i<n; i++){
		int x; scanf(" %d",&x);
		for(int j=1;j<10;j++){
			if(j<=x){
				printf("#");
			} else printf(".");
		}
		puts("");
	}
}
