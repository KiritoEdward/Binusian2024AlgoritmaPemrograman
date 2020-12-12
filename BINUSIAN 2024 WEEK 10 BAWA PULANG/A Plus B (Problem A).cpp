#include<stdio.h>

int main(){
	int a,b;
	FILE*fp=fopen("testdata.in","r");
	
	fscanf(fp,"%d %d",&a,&b);
	printf("%d\n",a+b);
	return 0;
}
