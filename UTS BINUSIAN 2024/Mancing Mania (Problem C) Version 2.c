#include <stdio.h>

void printT(int scnd){
	int hour = scnd/3600;
	scnd%=3600;
	int minute=scnd/60;
	scnd%=60;
	if(hour<10){
		printf("0%d:",hour);
	}else {
		printf("%d:",hour);
	}
	if(minute<10){
		printf("0%d:",minute);
	}else {
		printf("%d:",minute);
	}
	if(scnd<10){
		printf("0%d\n",scnd);
	}else {
		printf("%d\n",scnd);
	}
}


void cetch(int d,int v,int k,int y){
	long int scnd = 0;
	int turn = 0;
	while(1){
		if(turn==0){
			scnd++;
			d+=v;
			if(scnd%y==0){
				turn=1;
			}
		}
		if(turn==1){
			scnd++;
			d-=5;
			if(d<=0){
				printT(scnd);
				break;
			}
			if(v!=0){
				v-=k;
				if(v<=0){
					v=0;
				}
			}
			if(scnd%y==0){
				turn=0;
			}
		}
	}
}


int main(){
	int t; scanf(" %d", &t);
	for(int ces=1; ces <= t; ces++){
		int x, w, d, v, k, y; scanf(" %d %d %d %d %d %d", &x, &w, &d, &v, &k, &y);
		switch (x){
			case 1:
				if(w>450){
					printf("Case #%d: Line broke up\n", ces);
				} else {
					printf("Case #%d: ",ces);
					cetch(d, v, k, y);
				}
				break;
			case 2:
				if(w>900){
					printf("Case #%d: Line broke up\n", ces);
				} else {
					printf("Case #%d: ",ces);
					cetch(d, v, k, y);
				}
				break;
			case 3:
				if(w>1320){
					printf("Case #%d: Line broke up\n", ces);
				} else {
					
					printf("Case #%d: ",ces);
					cetch(d, v, k, y);
				}
				break;
			case 4:
				if(w>3200){
					printf("Case #%d: Line broke up\n", ces);
				} else {
					
					printf("Case #%d: ",ces);
					cetch(d, v, k, y);
				}
				break;
			case 5:
				if(w>4500){
					printf("Case #%d: Line broke up\n", ces);
				} else {
					
					printf("Case #%d: ",ces);
					cetch(d, v, k, y);
				}
				break;
		}
	}
}