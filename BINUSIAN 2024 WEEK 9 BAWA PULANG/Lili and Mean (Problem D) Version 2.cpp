#include <stdio.h>
#include <stdlib.h>

struct student{
  char id[11];
  char name[15];
  int grade;
} *students;

int main(){
  int n; scanf(" %d", &n);
  students = (struct student*)malloc(n * sizeof(struct student));
  double sum = 0;
  for(int i = 0; i < n; ++i){
    scanf(" %[^\n]", students[i].id);
    scanf(" %[^\n]", students[i].name);
    scanf(" %d", &students[i].grade);
    sum += students[i].grade;
  }
  sum /= n;
  for(int i = 0; i < n; ++i){
    if (students[i].grade >= sum){
      printf("%s %s\n", students[i].id, students[i].name);
    }
  }
}
