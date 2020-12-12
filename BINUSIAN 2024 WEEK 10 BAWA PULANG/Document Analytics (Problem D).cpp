#include <stdio.h>

int main(){
  FILE *fp = fopen("testdata.in", "r");
  int n; fscanf(fp," %d",&n);
  char c = getc(fp);
  long long int words = 0;
  int counter = 0, pages = 1;
  bool got = false;
  while(!feof(fp)){
      c = getc(fp);
      if(c == ' ' || c == '\n'){
        if(counter != 0){
          words++;
          counter = 0;
        }
      } else if(c == '#'){
        if(words < n){
          printf("page %d: %lld word(s)\n", pages, words);
          got = true;
        }
        pages++;
        counter = 0;
        words = 0;
      } else{
        counter++;
      }
  }
  if(!got){
    printf("The essay is correct\n");
  }
}
