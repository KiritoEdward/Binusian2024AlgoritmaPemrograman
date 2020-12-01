#include <stdio.h>

int main(){
	int testcase,j=1,number,input;
	scanf("%d",&testcase);
	for (j=0;j<testcase;j++){
		scanf("%d",&number);
		int arr[number],r_arr[number];
		for(int i=0;i<number;i++){
			scanf("%d",&input);
			arr[i]= input;
		}
		printf("Case #%d:",j+1);
		for (int i=number-1;i>0;i--){
			printf(" %d %d",arr[i-1],arr[i]);
			i=i-1;
		}
		printf("\n");
	}
	return 0;
}
