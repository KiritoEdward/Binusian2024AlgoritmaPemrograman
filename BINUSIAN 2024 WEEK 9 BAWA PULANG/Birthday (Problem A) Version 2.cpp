#include <stdio.h>
#include <string.h>
#include <stdbool.h>

struct customer {
  char name[101];
  int dd;
  int mm;
  int bought;
}customers[1000];

int main(){
  int t;
  scanf(" %d", &t);
  for (int C = 1; C <= t; C++){
    printf("Case #%d:\n", C);
    int n, m;
    scanf(" %d %d", &n, &m);
    for(int i = 0; i < n; i++){
      char s[101]; int dd, mm, bought;
      scanf(" %s %d/%d %d", s, &dd, &mm, &bought);
      strcpy(customers[i].name, s);
      customers[i].dd = dd;
      customers[i].mm = mm;
      customers[i].bought = bought;
    }
    int p;
    scanf(" %d", &p);
    for (int i = 0; i < p; ++i){
      int dd, mm;
      bool found = false;
      scanf(" %d/%d", &dd, &mm);
      for(int j = 0; j < n; j++){
        if(customers[j].bought >= m){
          if(customers[j].dd == dd && customers[j].mm == mm){
            found = true;
            printf("%s\n", customers[j].name);
          }
        }
      }
      if(!found){
        printf("No one\n");
      }
    }
  }
}
