#include <stdio.h>
char map[102][102];
int jarak=0;
void walk(int x,int y,int mat1,int mat2){
	if(map[x][y]=='#')return;
	if (x>mat1-1||y>mat2-1||x<0||y<0) return;
	if(map[x][y]=='.' || map[x][y]=='E')jarak+=1;
 	map[x][y]='#';
 	walk(x+1,y,mat1,mat2);
	walk(x-1,y,mat1,mat2);
	walk(x,y+1,mat1,mat2);
	walk(x,y-1,mat1,mat2);
}
int main(){
 int mat1,mat2;
 int x=0,y=0;
  	scanf("%d %d",&mat1,&mat2);
		for(int i=0;i<mat1;i++){
  			for(int z=0;z<mat2;z++){
   				scanf(" %c",&map[i][z]);
					if (map[i][z]=='S'){
  					x=i;
  					y=z;
  				}		
			}
		}
  walk(x,y,mat1,mat2);
  printf("%d\n",jarak);
	jarak=0;
 return 0;
}
