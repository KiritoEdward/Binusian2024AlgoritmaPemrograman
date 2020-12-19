#include <stdio.h>
#include <string.h>

struct person{
  char name[51];
  int num;
};

int main(){
  int t; scanf(" %d", &t);
  for(int C = 1; C <= t; ++C){
    int n; scanf(" %d", &n);
    struct person people[n];
    for (int i = 0; i < n; ++i){
      scanf(" %[^#]#%d", people[i].name, &people[i].num);
    }
    for (int i = n-1; i >= 0; --i){
      for (int j = 0; j < i; ++j){
        if(people[j].num > people[j+1].num){
          struct person temp = people[j];
          people[j] = people[j+1];
          people[j+1] = temp;
        } else if(people[j].num == people[j+1].num){
          if (strcmp(people[j].name,people[j+1].name) > 0){
            struct person temp = people[j];
            people[j] = people[j+1];
            people[j+1] = temp;
          }
        }
      }
    }
    printf("Case #%d:\n", C);
    for (int i = 0; i < n; ++i){
      printf("%s - %d\n", people[i].name, people[i].num);
    }
  }
}
