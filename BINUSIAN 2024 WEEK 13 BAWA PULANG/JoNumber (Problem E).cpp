#include<bits/stdc++.h>

char JoNumber[UINT_MAX]={0};


void init(){
    int i;
    int num;
    for(i=0;i<MAX;i++){
        num = i*(i+1)*(i+2)/3;
        printf("%d\n",num);
        if(num>=MAX)
            break;
        JoNumber[num][num]=1;
    }
}

int main(){
    unsigned long long int t,x,i;
    unsigned long long int ans = 0;
    int caseNum=1;
    init();
    scanf("%llu",&t);
    while(t--){
        scanf("%llu",&x);
        ans=0;
        for(i=0;i<=(x/2)+1;i++){
            if(JoNumber[i][i]==1){
                if(JoNumber[x-i][x-i]==1){
                    ans=1;
                    break; 
            	}                               
            }
        }
        if(ans==1){
            printf("Case #%d: Yes\n",caseNum);
        }
        else{
            printf("Case #%d: No\n",caseNum);
        }
        caseNum++;
    }
    return 0;
}
