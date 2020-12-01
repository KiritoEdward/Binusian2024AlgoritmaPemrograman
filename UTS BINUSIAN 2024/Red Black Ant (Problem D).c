#include <stdio.h>
#include <math.h>

void bleh(int scnd, int r, int b){
	if(r-b==0){
		printf("%d None %d\n",scnd-1,0);
	} else if(r>b){
		printf("%d Red %d\n",scnd-1,r-b);
	} else {
		printf("%d Black %d\n",scnd-1,b-r);
	}
}

int main (){
	int t; scanf(" %d", &t);
	for (int ces = 1; ces <= t; ces++){
		int s, r, b, rb=0, bb=0; scanf(" %d %d %d", &s, &r, &b);
		printf("Case #%d: ",ces);
		long long scnd = 0;
		while(1){
			if(r+b>s){
				bleh(scnd,rb,bb);
				break;
			} 
			scnd++;
			if(r+b==s){
				bleh(scnd,r,b);
				break;
			} 
			rb = r;
			if(scnd%4==0){
				r-=(int)floor((float)r/3);
			} else {
				r*=2;
			}
			bb = b;
			if(scnd%3==0){
				b-=(int)floor(((float)b*4)/5);
			} else {
				b*=3;
			}
		}
	}
}