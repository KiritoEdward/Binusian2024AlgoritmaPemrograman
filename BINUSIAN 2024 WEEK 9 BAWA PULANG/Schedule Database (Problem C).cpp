#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct classcode{
  char code[9];
  char day[10];
  int time;
} *classes;

int main (){
  int n; scanf(" %d", &n);
  classes = (struct classcode*) malloc(n * sizeof(struct classcode));
  for(int i = 0; i < n; ++i){
    scanf(" %[^\n]", classes[i].code);
    scanf(" %[^\n]", classes[i].day);
    scanf(" %d", &classes[i].time);
  }
  scanf(" %d", &n);
  for(int i = 0; i < n; ++i){
    int q; scanf(" %d", &q);
    printf("Query #%d:\nCode: %s\nDay: %s\nTime: %.2d:00\n",i+1 , classes[q-1].code, classes[q-1].day, classes[q-1].time);
  }
}
