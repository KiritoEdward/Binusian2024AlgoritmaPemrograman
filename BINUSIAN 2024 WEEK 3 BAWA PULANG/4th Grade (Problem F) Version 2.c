#include <stdio.h> 
 
int main()
{ 
    long long int T = 0, N = 0, A = 0, B = 0, C = 0, i; 
    scanf("%lld", &T); getchar();
    for(i = 1; i <= T; i++)
	{
        long long int arr[2000005] = {0}, angka[2000005] = {0}, j;
  		C = 1;
  		B = 0;
  		A = 0;
        scanf("%lld",&N); getchar();
        for(j = 2; j*j <= N; j++)
		{
        	int X = 0, k;
            for(k = 2; k*k <= j; k++)
			{
                if(j % k == 0)
				{
                    X = 1;
                    break;
                }
            }
            if(X == 0 && N % j == 0)
			{
                B++; 
            }
            while(N % j == 0 && X == 0)
			{
                N /= j;
                angka[B] = j;
                arr[B]++;
            }
        }
        for(j = 1; j <= B; j++)
		{
            if(arr[j] != 0 && A != 0)
			{
                printf(" * %lld ^ %lld", angka[j], arr[j]);
            }
            else if(arr[j] != 0)
			{
                A = 1;
                C = 0;
                printf("Case #%lld: %lld ^ %lld", i, angka[j], arr[j]);
            }
        }
        if(N != 1 && C != 0)
		{
            printf("Case #%lld: %d ^ %lld\n", i, N, 1);
		}
  		else if(N != 1)
		{
            printf(" * %lld ^ %lld\n", N, 1);
        }
        else
		{
            printf("\n");
        }
    }
    return 0;
}
