#include <stdio.h>

int main(){
	int tescase, a, b, c, kel, luas;
	int x, y, z;
	int num[1000];
	FILE *fp = fopen("testdata.in","r");
	fscanf(fp,"%d",&tescase);
	for (int i=1;i<=tescase;i++){
		fscanf(fp,"%d", &a);
		for(b = 0; b < a; b++){
			fscanf(fp,"%d", &num[b]);
		}
		luas = 0;
		kel = 0;
		for(x = 0; x < a; x++){
			y = 0;
			z = 0;
			if(x == 0){
				y = num[x];
			}
			if(x == a - 1){
				z = num[x];
			}
			if(num[x-1] > num[x] && x != 0){
				y = 0;
			}
			else if(num[x-1] < num[x] && x != 0){
				y = num[x] - num[x-1];
			}
			if(num[x+1] > num[x] && x != a - 1){
				z = 0;
			}
			else if(num[x+1] < num[x] && x != a - 1){
				z = num[x] - num[x+1];
			}
			luas+=num[x];
			kel += 2 * (2 + y + z);
		}
		luas = luas * 4;
		printf("Case #%d: %d %d\n",i, kel, luas);
	}
	fclose(fp);
	return 0;
}
