#include <stdio.h>

int main() {
	
    int t,n;
    scanf("%d", &t);
    for(int i = 1; i <= t; i++) {
    	int err[105]={0}, err1[105]={0};
        int flag=0, done=1, check=0;
        
        scanf("%d", &n);
        
		for(int j = 2; j*j <= n; j++) {
			int c = 0;
			
            for(int k = 2; k*k <= j; k++) {
                if(j % k == 0) {
                    c=1;
                    break;
                }
            }
            
            if(c == 0 && n % j == 0) {
            	flag++;
			}

            while(n % j == 0 && c == 0) {
                n/=j;
                err1[flag]=j;
                err[flag]++;
            }
        }
        
		for(int j = 1; j <= flag; j++) {
            if(err[j] != 0 && check != 0) {
            	printf(" * %d ^ %d", err1[j], err[j]);
			}
            else if(err[j] != 0) {
                check=1;
                done=0;
                printf("Case #%d: %d ^ %d", i, err1[j], err[j]);
            }
        }
        
		if(n != 1 && done != 0) {
			printf("Case #%d: %d ^ %d\n",i, n, 1);
		} else if(n != 1) {
			printf(" * %d ^ %d\n", n, 1);
		} else {
        	printf("\n");
		}
    }
    
    return 0;
}
