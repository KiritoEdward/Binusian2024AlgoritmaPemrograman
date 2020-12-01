#include <stdio.h>
int main (){
    static int array[10][10];
    int i, j, m, n, sum = 0,counter;
    scanf("%d",&counter);
    for(int k=0;k<counter;k++){
    	scanf("%d", &m);
	    for (i = 0; i < m; ++i){
	        for (j = 0; j < m; ++j) {
	            scanf("%d", &array[i][j]);getchar();
	        }
	    }
		printf("Case #%d:",k+1);
	    for (j = 0; j < m; ++j) {
	        for (i = 0; i < m; ++i){
	            sum = sum + array[i][j];
	        }
	        printf(" %d",sum);
	        sum = 0;
	 	}
	 	printf("\n");
	}
 	
	return 0;
}
