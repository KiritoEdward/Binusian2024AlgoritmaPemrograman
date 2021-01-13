#include<stdio.h>

long long int finalRecursion(long long int x){
	if(x==0){
		return 0;
	}else{
		return finalRecursion(x-1) + 1;
	}
}

int main()
{
	long long int x, finalScore;
	scanf("%lld",&x);
	
	finalScore = finalRecursion(x);
	printf("%lld\n",finalScore);
	
	return 0;
}
