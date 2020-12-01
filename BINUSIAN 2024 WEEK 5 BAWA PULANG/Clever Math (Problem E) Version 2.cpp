#include <stdio.h>
#include <math.h>

int main(){
	int t; scanf(" %d",&t);
	for(int i=1;i<=t;i++){
		long long int a,b; scanf(" %lld %lld",&a, &b);
		long long int j=0,sum=0;
		while(a>0||b>0){
			long long int checka,checkb;
			checka=a%10;
			a/=10;
			checkb=b%10;
			b/=10;
			if(checka+checkb>=10){
				checka+=checkb-10;
			} else checka+=checkb;
			sum+=checka*pow(10,j);
			j++;
		}
		printf("Case #%d: %lld\n",i, sum);
	}
}
