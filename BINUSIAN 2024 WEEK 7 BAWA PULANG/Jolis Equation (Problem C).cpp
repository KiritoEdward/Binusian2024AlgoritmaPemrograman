#include <stdio.h>

int jojo(int m,int n){
	if(m == 0 || n == 0){
		return 0;
	} else {
		return 2*m+3*n+jojo(m-1,n)+jojo(m,n-1);
	}
}

int main(){
	int m, n; scanf(" %d %d", &m, &n);
	int result = jojo(m,n);
	printf("%d\n",result);
}
