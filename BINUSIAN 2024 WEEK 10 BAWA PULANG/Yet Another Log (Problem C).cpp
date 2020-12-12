#include <stdio.h>

int main(){
  FILE *fp = fopen("testdata.in", "r");
  int n, m, i; fscanf(fp, " %d %d", &n, &m);
  long long int length = 0, sum = 0;
  char c = getc(fp);
  for (i = 0; i < n; ++i){
    c = getc(fp);
    if(c == '1'){
      length++;
    } else {
      if(length >= m){
        sum++;
      }
      length = 0;
    }
  }
  if(length >= m){
    sum++;
  }
  printf("%lld\n", sum);
}
