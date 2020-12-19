#include <stdio.h>
#include <string.h>

struct student {
  char name[51];
  int num;
} students [50];

int main(){
  int t; scanf(" %d", &t);
  for (int C = 1; C <= t; ++C){
    int n; scanf(" %d", &n);
    for (int i = 0; i < n; ++i){
      scanf(" %[^#]#%d", students[i].name, &students[i].num);
    }
    for (int i = n; i > 0; --i){
      for (int j = 0; j < i-1; ++j){
        if (students[j].num == students[j+1].num){
          if (strcmp(students[j].name, students[j+1].name) > 0){
            struct student temp = students[j];
            students[j] = students[j+1];
            students[j+1] = temp;
          }
        } else if (students[j].num < students[j+1].num){
          struct student temp = students[j];
          students[j] = students[j+1];
          students[j+1] = temp;
        }
      }
    }
    printf("Case #%d:\n", C);
    for (int i = 0; i < n; ++i){
      printf("%s - %d\n", students[i].name, students[i].num);
    }
  }
}
