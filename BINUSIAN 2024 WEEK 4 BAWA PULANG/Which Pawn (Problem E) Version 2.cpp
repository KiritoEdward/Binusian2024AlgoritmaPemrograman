#include<stdio.h>
int a[] = {-2,-1,1,2,2,1,-1,-2};
int b[] = {1,2,2,1,-1,-2,-2,-1};

int benteng(int papan[205][205], int x, int y, int n){
    int ans=0;
    int a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a++][b]==1){
            ans++;
            break;
        }
    a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a--][b]==1){
            ans++;
            break;
        }
    a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a][b++]==1){
            ans++;
            break;
        }
    a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a][b--]==1){
            ans++;
            break;
        }
    return ans;
}

int kuda(int papan[205][205], int x, int y, int n){
    int ans=0;
    int i;
    int x_move,y_move;
    for(i = 0; i < 10;i++){
        x_move=x+a[i]-1;
        y_move=y+b[i]-1;
        if(x_move>=0 && x_move<n && y_move>=0 && y_move<n)
            if(papan[x_move][y_move]==1)
                ans++;
    }
    
    return ans;
}

int menteri(int papan[205][205], int x, int y, int n){
    int ans=0;
    int a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a--][b--]==1){
            ans++;
            break;
        }
    a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a--][b++]==1){
            ans++;
            break;
        }
    a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a++][b++]==1){
            ans++;
            break;
        }
    a=x-1,b=y-1;
    while(a>=0 && b>=0 && a<n && b<n)
        if(papan[a++][b--]==1){
            ans++;
            break;
        }
    return ans;
}

int main() {
    int n,m;
    int board[205][205]={0};
    int x,y;
    int q;
    int jawaban_benteng,jawaban_kuda,jawaban_menteri;
    int jawabanAkhir;
    scanf("%d%d",&n,&m);
    while(m-- > 0){
        scanf("%d%d",&x,&y);
        board[--x][--y]=1;
    }
    scanf("%d",&q);
    while(q-- > 0){
        scanf("%d%d",&x,&y);
        jawaban_benteng=benteng(board,x,y,n);
        jawaban_kuda=kuda(board,x,y,n);
        jawaban_menteri=menteri(board,x,y,n);
        
         jawaban_benteng=jawaban_benteng*10+1;
         jawaban_kuda=jawaban_kuda*10+3;
         jawaban_menteri=jawaban_menteri*10+2;
         
        jawabanAkhir=(jawaban_benteng > jawaban_menteri && jawaban_benteng > jawaban_kuda)?jawaban_benteng:(jawaban_menteri > jawaban_kuda)?jawaban_menteri:jawaban_kuda;
        
        jawabanAkhir=jawabanAkhir%10;
        if(jawabanAkhir==3)
            jawabanAkhir=1;
        else if(jawabanAkhir==1)
            jawabanAkhir=3;
        printf("%d\n",jawabanAkhir);
    }
    return 0;
}
