#include<stdio.h>

int main()
{
	float T,A,B;
	scanf("%f",&T);
	for(int i=0;i<T;i++)
	{
		scanf("%f %f",&A,&B);
		printf("%.2f\n",(A*B)/360);
	}
}
