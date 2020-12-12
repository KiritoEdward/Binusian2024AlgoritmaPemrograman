#include <stdio.h>
#include <string.h>

int main(){
  FILE *input = fopen("testdata.in", "r");
  int t; fscanf(input," %d", &t);
  for(int C = 1; C <= t ; ++C){
    int n; fscanf(input, " %d", &n);
    char str[1001]; fscanf(input, " %[^\n]", str);
    for(int i = 0; i < strlen(str); ++i){
      if(str[i] == ' '){
        continue;
      }
      switch (str[i]) {
        case '0' :
          str[i] = 'O';
          break;
        case '1' :
          str[i] = 'I';
          break;
        case '3' :
          str[i] = 'E';
          break;
        case '4' :
          str[i] = 'A';
          break;
        case '5' :
          str[i] = 'S';
          break;
        case '6' :
          str[i] = 'G';
          break;
        case '7' :
          str[i] = 'T';
          break;
        case '8' :
          str[i] = 'B';
          break;
      }
      str[i]= (str[i]-'A'-n) % 26;
      if(str[i] < 0){
        str[i] += 26;
      }
      str[i] += 'A';
    }
    printf("Case #%d: %s\n", C, str);
  }
}
