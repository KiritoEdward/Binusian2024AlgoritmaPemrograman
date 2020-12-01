#include<stdio.h>

int main(){
	int A[5],B[5],C[5],D[5];
	int hasil1,hasil2,hasil3;
	for(int i=0;i<3;i++){
		scanf("(%d+%d)x(%d-%d)",&A[i],&B[i],&C[i],&D[i]);getchar();
	}
	hasil1 = (A[0]+B[0])*(C[0]-D[0]);
	hasil2 = (A[1]+B[1])*(C[1]-D[1]);
	hasil3 = (A[2]+B[2])*(C[2]-D[2]);
	printf("%d %d %d\n",hasil1,hasil2,hasil3);
}
