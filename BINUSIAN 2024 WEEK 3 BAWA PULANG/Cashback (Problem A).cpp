#include<stdio.h>

int main(){
	int testCase,GoJo,BiPay;
	scanf("%d",&testCase);
	for(int i=0; i < testCase;i++){
		scanf("%d %d",&GoJo,&BiPay);
		if(GoJo > BiPay){
			printf("Case #%d: Go-Jo\n",i+1);
		}else{
			printf("Case #%d: Bi-Pay\n",i+1);
		}
	}
}
