#include<stdio.h>
#include<string.h>

int main()
{
	int counter;
	scanf("%d",&counter); getchar();
	
	char item[counter][105];
	for(int i = 0 ; i < counter ; i++)
	{
		char items[counter][105];
		int indeks;
		scanf("%s %d",&items[i],&indeks); getchar();
		strcpy(item[indeks-1],items[i]);
	}
	for(int j = 0 ; j < counter ; j++)
	{
		printf("Lecturer #%d: %s\n",j+1,item[j]);
	}
	return 0;
}
