#include <stdio.h>
#include<math.h>

int main(){
    int x,y,test,i=1;
    scanf("%d",&test);
    while(i<=test){
        scanf("%d",&x);
        scanf("%d",&y);
        int count=0,c=0;
        while(x>0)
        {
            count++;
            c++;
            x--;
            if(c==y)
            {
                x++;
                c=0;
            }
            
        }
        printf("Case #%d: %d",i,count);
        i++;
    }
    return 0;
}
