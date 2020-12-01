#include <stdio.h>

int main(){
	int x,y; scanf(" %d %d", &x,&y);
	int arr[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			scanf(" %d",&arr[i][j]);
		}
	}
	int n; scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b,c;
		scanf("%d %d %d",&a,&b,&c);
		arr[a-1][b-1]=c;
	}
	for(int i=0;i<x;i++){
		int first=1;
		for(int j=0;j<y;j++){
			if (first){
				printf("%d",arr[i][j]);
				first=0;
			}else printf(" %d",arr[i][j]);
		} printf("\n");
	}
}
