#include <stdio.h>

int searcher(char (*map)[8], int counter){
	counter++;
	char moved[8][8];
	for(int i = 0; i<8; i++){
		for (int j = 0; j<8; j++){
			moved[i][j] = '0';
		}
	}
	for(int i = 0; i< 8; i++){
		for(int j=0; j<8; j++){
			if(map[i][j] == '+'){
				map[i][j] = '-';
				if(i+1<8&&j+2<8){
					if(map[i+1][j+2] == '*'){
						return counter;
					} else if(map[i+1][j+2] != '-'){
						moved[i+1][j+2] = '+';
					}
				}
				if(i+2<8&&j+1<8){
					if(map[i+2][j+1] == '*'){
						return counter;
					} else if(map[i+2][j+1] != '-'){
						moved[i+2][j+1] = '+';
					}
				}
				if(i-1>=0&&j+2<8){
					if(map[i-1][j+2] == '*'){
						return counter;
					} else if(map[i-1][j+2] != '-'){
						moved[i-1][j+2] = '+';
					}
				}
				if(i-2>=0&&j+1<8){
					if(map[i-2][j+1] == '*'){
						return counter;
					} else if(map[i-2][j+1] != '-'){
						moved[i-2][j+1] = '+';
					}
				}
				if(i-1>=0&&j-2>=0){
					if(map[i-1][j-2] == '*'){
						return counter;
					} else if(map[i-1][j-2] != '-'){
						moved[i-1][j-2] = '+';
					} 
				}
				if(i-2>=0&&j-1>=0){
					if(map[i-2][j-1] == '*'){
						return counter;
					} else if(map[i-2][j-1] != '-'){
						moved[i-2][j-1] = '+';
					} 
				}
				if(i+1<8&&j-2>=0){
					if(map[i+1][j-2] == '*'){
						return counter;
					}else if(map[i+1][j-2] != '-'){
						moved[i+1][j-2] = '+';
					}
				}
				if(i+2<8&&j-1>=0){
					 if(map[i+2][j-1] == '*'){
						return counter;
					} else if(map[i+2][j-1] != '-'){
						moved[i+2][j-1] = '+';
					}
				}
			}
		}
	}
	for(int i = 0; i<8; i++){
		for (int j = 0; j<8; j++){
			if(*(*(moved+i)+j) == '+'){
				map[i][j] = '+';
			}
		}
	}
	return searcher(map,counter);
}

int main(){
	int t; scanf(" %d", &t);
	for(int C = 1; C <= t; C++){
		char map[8][8];
		int a2, e2;
		char a1, e1;
		scanf(" %c%d %c%d", &a1, &a2, &e1, &e2);
		if(a1 == e1 && a2 == e2){
			printf("Case #%d: 0\n",C);
			continue;
		}
		a1 = a1 - 'A';  e1 = e1 - 'A';
		for(int i = 0; i<8; i++){
			for (int j = 0; j<8; j++){
				map[i][j] = '0';
			}
		}
		map[a1][a2-1] = '+'; map[e1][e2-1] = '*';
		
		printf("Case #%d: %d\n",C, searcher(map, 0));
	}
}
