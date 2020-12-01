#include<stdio.h>

int main()
{
	long long int ulang;
	long long int a = 1, b = 0, c = 0, i, n, sum = 0 ; 
	
	scanf("%lld",&ulang);
	
	for(int j=0;j<ulang;j++)
	{
		scanf("%lld", &n) ; 
		getchar();
		for(i = 1 ; i <= n ; i++) 
		{ 
			c = (a%1000000009 + b%1000000009); 
			sum = sum + c; 
			a = b ; 
			b = c ;
		} 
		 printf("Case #%lld: %lld\n", j+1,sum%1000000009);
		a = 1, b = 0, c = 0, i, n, sum = 0 ;
	}	
}
