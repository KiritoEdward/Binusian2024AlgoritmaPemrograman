#include<stdio.h>

int main()
{
    long long int input,temp = 1;
    
    scanf("%lld",&input);
    
    for(long long int i=0;i<input;i++)
    {
        temp = temp*2;
    }
    printf("%lld",temp-1);
	return 0;
}

