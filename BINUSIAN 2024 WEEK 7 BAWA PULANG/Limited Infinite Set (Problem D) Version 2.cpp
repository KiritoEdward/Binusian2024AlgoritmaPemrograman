#include <stdio.h>

int isitbiggest(int l, int x){
	int ans = l;
	while(l%(3*x) == 0){
		l/=3;
	}
	while(l%(4*x) == 0){
		l/=4;
	}
	while(l%(5*x) == 0){
		l/=5;
	}
	l/=x;
	if(l == 1){
		return ans;
	} else {
		return isitbiggest(ans-1,x);
	}
}

int main(){
	int t; scanf(" %d", &t);
	for(int C = 1; C <= t; C++){
		int x, l; scanf(" %d %d", &x, &l);
		printf("Case #%d: %d\n", C, isitbiggest(l,x));
	}
}