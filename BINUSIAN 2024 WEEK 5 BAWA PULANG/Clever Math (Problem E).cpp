#include <stdio.h>

long long int Sum(long long int a, long long int b){
   long long int result = 0;
   long long int multi = 1;
   long long int bit;
   
   while (a || b) {
       bit = (a % 10) + (b% 10);
       bit %= 10;
       result = (bit* multi) + result;
       a /= 10;
       b/= 10;
       multi*= 10;
   }
   return result;
}

int main(){
	long long int n,a,b;
	scanf("%lld",&n);
	
	for(long long int i=1;i<=n;i++){
		scanf("%lld %lld",&a,&b);
		printf("case #%lld: %lld\n",i,Sum(a,b));
	}
   return 0;
}
