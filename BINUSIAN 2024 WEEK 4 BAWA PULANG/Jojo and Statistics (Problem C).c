#include <stdio.h>

int main(){
	int t,i,j; scanf(" %d",&t);
	for(i=1;i<=t;i++){
		int n; scanf(" %d",&n);
		int ducks[100000];
		for(j=0;j<100000;j++){
			ducks[j]=0;	
		}
		int check;
		for(j=0;j<n;j++){
			scanf(" %d",&check);
			ducks[check-1]++;	
		}
		int highest=0;
		for(j=0;j<100000;j++){
			if(highest<ducks[j]){
				highest=ducks[j];
			}	
		}
		long long int sum=0;
		for(j=0;j<100000;j++){
			if(highest==ducks[j]){
				sum+=(j+1);
			}	
		}
		printf("Case #%d: %lld\n",i,sum);
	}
}

