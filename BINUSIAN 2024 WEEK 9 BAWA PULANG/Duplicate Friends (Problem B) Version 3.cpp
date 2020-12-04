#include <stdio.h>
#include <string.h>

int main(){
	int n; scanf(" %d", &n);
	char names[n][101];
	int checker[n];
	int sum = 0;
	for(int i = 0; i < n; i++){
		int get = 0;
		char name[101]; scanf(" %[^\n]", &name);
		if(i > 0){
			for(int j = 0; j < i; j++){
				if(strcmp(name, names[j]) == 0){
					get = 1;
					if(checker[j] != 1){
						checker[j] = 1;
						sum++;
					}
					break;
				}
			}
		}
		if(get == 0){
			strcpy(names[i],name);
			checker[i] = 0;
		}
	}
	printf("You have %d duplicate name(s).\n", sum);
}