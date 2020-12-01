#include<stdio.h>

int main(){
    int n,m,i,x,y,j,q;
    scanf("%d %d",&n,&m);
    int arr[255][255];
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            arr[i][j]=0;
        }
    }
    for(i=0;i<m;i++){
        scanf("%d %d",&x,&y);
        arr[x][y]=1;
    }
    scanf("%d",&q);
    for(i=1;i<=q;i++){
        int a,b,menteri=0,benteng=0,kuda=0;
        scanf("%d %d",&a,&b);
        for(j=1;a+j <=n && b+j <=n;j++){
            if(arr[a+j][b+j]==1){
                menteri++;
                break;
                }
        }
        for(j=1;a+j<=n && b-j>=1;j++){
            if(arr[a+j][b-j]==1){menteri++;
            break;
                }
        }
        for(j=1;a-j>=1 && b-j>=1;j++){
            if(arr[a-j][b-j]==1){
                menteri++; 
                break;
                }
        }
        for(j=1;a-j >=1&&b+j<=n;j++ ){
            if(arr[a-j][b+j]==1){
                menteri++; 
                break;
                }
        }
        for(j=1;a+j<=n;j++){
            if(arr[a+j][b]==1){
            benteng++;
            break;
                }
        }
        for(j=1;b+j<=n;j++){
            if(arr[a][b+j]==1){
                benteng++;
                break;
                }
        }
        for(j=1;a-j>=1;j++){
            if(arr[a-j][b]==1){
                benteng++;
                break;
                }
        }
        for(j=1;b-j>=1;j++){
            if(arr[a][b-j]==1){
                benteng++;
                break;
                }
        }
        
        
        if(arr[a+1][b+2]==1 && a+1<=n && b+2<=n)kuda++;
        if(arr[a+2][b+1]==1 && a+2<=n && b+1<=n)kuda++;
        if(arr[a+1][b-2]==1 && a+1<=n &&b-2>=1)kuda++;
        if(arr[a-1][b+2]==1 && a-1>=1 && b+2<=n)kuda++;
        if(arr[a-1][b-2]==1 && a-1>=1 && b-2>=1)kuda++;
        if(arr[a+2][b-1]==1 && a+2<=n && b-1>=1)kuda++;
        if(arr[a-2][b+1]==1 && a-2>=1 && b+1<=n)kuda++;
        if(arr[a-2][b-1]==1 && a-2>=1 && b-1>=1)kuda++;
       
        if(kuda>=benteng&& kuda>=menteri)printf("1\n");
        else if(menteri>kuda && menteri>=benteng)printf("2\n");
        else if(benteng>menteri && benteng>kuda)printf("3\n");
        }
    return 0;
}
