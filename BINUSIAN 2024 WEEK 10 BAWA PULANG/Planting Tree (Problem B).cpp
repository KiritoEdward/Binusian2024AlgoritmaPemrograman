#include <stdio.h>
#include <string.h>

int main(){
  FILE *fp = fopen("testdata.in", "r");
  int n; fscanf(fp, " %d", &n);
  char user[n][41], tree[n][41];
  for (int i = 0; i < n; ++i){
    fscanf(fp, " %[^#]#%[^\n]", user[i], tree[i]);
  }
  int q; fscanf(fp, " %d", &q);
  char check[41];
  for (int i = 1; i <= q; ++i){
    fscanf(fp, " %[^\n]", check);
    int j;
    for(j = 0; j < n; ++j){
      if(strcmp(check, user[j]) == 0){
        printf("Case #%d: %s\n", i, tree[j]);
        break;
      }
    }
    if(j == n){
      printf("Case #%d: N/A\n",i);
    }
  }
}
