#include<stdio.h>

int main(){
	double L,B,H;
	scanf("%lf %lf %lf",&L,&B,&H);getchar();
	double luas;
	luas = (2*((B*H)/2)) + (3*(L*B));
	printf("%.3lf\n",luas);
}
