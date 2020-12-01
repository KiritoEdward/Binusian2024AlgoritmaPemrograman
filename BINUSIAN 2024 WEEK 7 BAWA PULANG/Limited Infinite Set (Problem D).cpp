#include<stdio.h>

int main(){
	int t;
	scanf("%d",&t);
	for(int T=1;T<=t;T++){
		int x,l;
		scanf("%d %d",&x,&l);
		int mark[1001];
		for(int i=0;i<=1000;i++){
			mark[i]=0;
		}
		int num=x;
		mark[num]=1;
		while(num<=1000){
			if(mark[num]==1){
				int f=num*3;
				if(f<=l){
					mark[f]=1;
				}
				int s=num*4;
					if(s<=l){
						mark[s]=1;
					}
				int th=num*5;
				if(th<=l){
					mark[th]=1;
				}
			}
			num++;
		}
		int ans;
		for(int i=1000;i>=x;i--){
			if(mark[i]==1){
				ans=i;
				break;
			}
		}
		printf("Case #%d: %d\n",T,ans);
	}
	return 0;
}
