#include <stdio.h>
#include <string.h>

int main(){
  int t; scanf(" %d", &t);
  for(int C = 1; C <= t; ++C){
    int n; scanf(" %d", &n);
    char people[n][101];
    for (int i = 0; i < n; ++i){
      scanf(" %[^\n]", people[i]);
    }
    int sum = n;
    for (int i = 0; i < n; ++i){ //O(n*n/2) ???
      if(people[i][0] == '#')
        continue;
      for (int j = i + 1; j < n; ++j){
        if (strcmp(people[i], people[j]) == 0){
          sum--;
          people[j][0] = '#';
        }
      }
    }
    printf("Case #%d: %d\n", C, sum);
  }
}
