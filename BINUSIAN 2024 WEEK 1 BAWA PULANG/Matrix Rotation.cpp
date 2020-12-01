#include <stdio.h>

int main()
{
    char simbol[100][100];
    int i, j;
    for(i = 0; i < 3; i++)
    {
    	for(j = 0; j < 3; j++)
    	{
    		scanf("%c", &simbol[i][j]); getchar();
		}
	}
	printf("  %c\n", simbol[0][0]);
	printf(" %c %c\n", simbol[1][0], simbol[0][1]);
	printf("%c %c %c\n", simbol[2][0], simbol[1][1], simbol[0][2]);
	printf(" %c %c\n", simbol[2][1], simbol[1][2]);
	printf("  %c\n", simbol[2][2]);
    
    return 0;
}
