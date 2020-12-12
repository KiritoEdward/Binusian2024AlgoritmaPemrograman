#include <stdio.h>
#include <string.h>

int main(){
  FILE *fp = fopen("testdata.in", "r");
  int counter; fscanf(fp, " %d", &counter);
  for (int C = 1; C <= counter; ++C){
    int n; fscanf(fp, " %d", &n);
    char str[n][1001];
    int terpanjang = 0  ,terpendek = 1000;
    for (int i = 0; i < n; ++i){
      fscanf(fp, " %[^\n]", str[i]);
      if(terpanjang < strlen(str[i])){
        terpanjang = strlen(str[i]);
      }
      if(terpendek > strlen(str[i])){
        terpendek = strlen(str[i]);
      }
    }
    int sama = 1, prefix = terpanjang - 1;
    for(int i = 0; i < terpanjang; ++i){
      for (int j = 0; j < n-1; j++){
        if(str[j][i] != str[j+1][i]){
          sama = 0;
          break;
        }
      }
      if(sama == 0){
        prefix = i - 1;
        break;
      }
    }
    sama = 1;
    int suffix = terpendek - 1;
    int counter[n];
    for(int i = 0; i < n; ++i){
      counter[i] = strlen(str[i]) - 1;
    }
    for(int i = 0; i < terpendek; ++i){
      for (int j = 0; j < n-1; j++){
        if(str[j][counter[j]--] != str[j+1][counter[j+1]]){
          sama = 0;
          break;
        }
        if(j == n - 2){
          counter[j+1]--;
        }
      }
      if(sama == 0){
        suffix = i - 1;
        break;
      }
    }
    printf("Case #%d: ", C);
    if(prefix != -1){
      for(int i = 0; i <= prefix; ++i){
        printf("%c",str[0][i]);
      }
    }
    if(suffix != -1){
      for(int i = strlen(str[0]) - suffix - 1; i < strlen(str[0]); ++i){
        printf("%c", str[0][i]);
      }
    }
    puts("");
  }
}
