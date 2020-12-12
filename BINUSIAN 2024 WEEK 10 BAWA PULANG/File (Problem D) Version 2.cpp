#include <stdio.h>
#include <string.h>

int main(){
  FILE *input = fopen("testdata.in","r");
  int words; fscanf(input, " %d", &words);
  char unknown[words][51], translate[words][51];
  for (int i = 0; i < words; ++i){
    fscanf(input, " %[^#]#%s", unknown[i], translate[i]);
  }
  int t; fscanf(input," %d", &t); getc(input);
  char str[101];
  char c;
  for(int C = 1; C <= t; ++C){
    printf("Case #%d:\n", C);
    while (1){
      int count = 0;
      int last = 0;
      while(1) {
        c = getc(input);
        if(c != ' '){
          if(c != '\n') {
            str[count++] = c;
          }
          else {
            last = 1;
            break;
          }
        } else break;
      }
      str[count] = '\0';
      int got = 0;
      for(int i = 0; i < words; i++){
        if(strcmp(str,unknown[i]) == 0){
          if(!last){
            printf("%s ", translate[i]);
          } else printf("%s\n", translate[i]);
          got = 1;
          break;
        }
      }
      if(got == 0){
        if(!last){
          printf("%s ", str);
        } else printf("%s\n", str);
      }
      if(c == '\n'){
        break;
      }
    }
  }
}
