#include <stdio.h>
#include <string.h>

int main(){
	int t; scanf(" %d", &t);
	for(int i=1;i<=t;i++){
		char str[101]; scanf(" %[^\n]", str);
		int len = strlen(str);
		int j=0, check = 0;
		for (int k=0; k<=len; k++){
			if(str[k]==' '||str[k]=='\0'){
				check = 1;
			}
			else {
				j++;
			}
			if(check){
				int r=k-j+1,l=k-2;
				for(;r<k-j+j/2;r++){
					char swap = str[r];
					str[r]=str[l];
					str[l]=swap;
					l--;
				}
				j=0;
				check=0;
			}
		}
		printf("Case #%d: %s\n",i,str);
	}
}