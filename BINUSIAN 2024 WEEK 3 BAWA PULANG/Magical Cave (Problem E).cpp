#include<stdio.h>

int main(){
    int counter;
    int testCase =0;
    scanf("%d",&counter);
    while(counter--){
        testCase++;
        int n;
        scanf("%d",&n);
        long totalMinimal = 100000008;
        long sm = 0;
        int i= 0;
        for(i;i<n;i++){
            int num;
            scanf("%d",&num);
            sm+=(long)num;
            if(totalMinimal <= sm){
                totalMinimal = totalMinimal;
			}else{
				totalMinimal = sm;
			}
        }
                
        if(totalMinimal>0){
            printf("Case #%d: 0\n",testCase);
        }else{
            long jawaban = -totalMinimal+1;
            printf("Case #%d: %ld\n",testCase,jawaban );
        }
    }
    return 0;
}
