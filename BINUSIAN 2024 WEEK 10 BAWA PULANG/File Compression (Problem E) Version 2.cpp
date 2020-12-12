#include <stdio.h>

int main(){
  FILE *input = fopen("testdata.in", "r");
  int t; fscanf(input, " %d", &t);
  for (int C = 1; C <= t; ++C){
    printf("Case #%d:\n", C);
    int y, x; fscanf(input, " %d %d", &y, &x);
    char arr[y][x];
    int start[] = {y,x}, end[] = {0,0};
    for (int i = 0; i < y; ++i){
      for (int j = 0; j < x; ++j){
        fscanf(input, " %c", &arr[i][j]);
        if(arr[i][j] != '.'){
          if(start[0] > i){
            start[0] = i;
          }
          if(start[1] > j){
            start[1] = j;
          }
          if(end[0] < i){
            end[0] = i;
          }
          if(end[1] < j){
            end[1] = j;
          }
        }
      }
    }
    printf("%d %d\n", end[0] - start[0] + 1 , end[1] - start[1] + 1);
    for (int i = start[0]; i <= end[0]; ++i){
      for (int j = start[1]; j <= end[1]; ++j){
        printf("%c", arr[i][j]);
      }
      puts("");
    }
  }
}
