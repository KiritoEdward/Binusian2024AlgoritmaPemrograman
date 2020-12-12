#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main(){
  FILE *input = fopen("testdata.in", "r");
  int t; fscanf(input, " %d", &t);
  for(int C = 1; C <= t; ++C){
    int alphabet[26];
    bool skip[26];
    for (int i  = 0; i < 26; ++i){
      alphabet[i] = 0;
      skip[i] = false;
    }
    char str[101]; fscanf(input, " %s", str);
    int n; fscanf(input, " %d", &n);
    char change, changed;
    for(int i = 0; i < n ; ++i){
      fscanf(input, " %c %c", &change, &changed);
      if(skip[change-'A']){
          continue;
      }
      for(int j = 0; j < strlen(str); ++j){
        if(str[j] == change){
          str[j] = changed;
        }
      }
      skip[change - 'A'] = true;
    }
    for(int i = 0; i < strlen(str); ++i){
      alphabet[str[i] - 'A']++;
    }
    for(int i  = 0; i < 26; ++i){
      if(alphabet[i] != 0){
        printf("%c %d\n", i+'A', alphabet[i]);
      }
    }
  }
}
