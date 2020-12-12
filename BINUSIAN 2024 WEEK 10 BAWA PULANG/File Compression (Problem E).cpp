#include<stdio.h>

int main(){
	long long int counter;
	FILE *fp = fopen("testdata.in","r");
	fscanf(fp,"%lld\n",&counter);
	for(long long int x=1;x<=counter;x++){
		long long int n, m;
		fscanf(fp,"%lld %lld",&n,&m);
		char matrix[n][m];
		for (long long int i = 0; i < n; i++){
			for (long long int j = 0; j < m; j++){
				fscanf(fp," %c",&matrix[i][j]);
			}
		}
		long long int atas = -1, bawah = -1, kiri = -1, kanan = -1;
		for (long long int i = 0; i < n; i++){
			for (long long int j = 0; j < m; j++){
				if (matrix[i][j] == '.')
					continue;
				else {
					if (atas == -1){
						atas = i; bawah = i; kiri = j; kanan = j;
					}else{
						if (atas > i)
							atas = i;
						if (kiri > j)
							kiri = j;
						if (bawah < i)
							bawah = i;
						if (kanan < j)
							kanan = j;
					}
				}
			}
		}
		printf("Case #%lld:\n",x);
		printf("%lld %lld\n",bawah-atas+1,kanan-kiri+1);
		for (long long int i = atas; i <= bawah; i++){
			for (long long int j = kiri; j <= kanan; j++){
				printf("%c",matrix[i][j]);
		}
		printf("\n");
		}
	}
}
