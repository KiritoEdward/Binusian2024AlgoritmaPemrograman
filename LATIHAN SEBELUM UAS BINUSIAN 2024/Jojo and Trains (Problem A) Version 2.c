#include <stdio.h>
#include <string.h>

struct schedule{
    char code[21];
    char time[6];
    char origin[101];
    char dest[101];
};

int main(){
    int n; scanf(" %d", &n);
    struct schedule schedules[n];
    for (int i = 0; i < n; i++){
        scanf(" %s %s", schedules[i].code, schedules[i].time);
    }
    for (int i = 0; i < n; i++){
        char code[21];
        scanf(" %s", code);
        for(int j = 0; j < n; j++){
            if(strcmp(schedules[j].code, code) == 0){
                scanf(" %s %s", schedules[j].origin, schedules[j].dest);
                break;
            }
        }
    }
    for (int i = 0; i < n; i++){
        printf("%s %s %s %s\n", schedules[i].code, schedules[i].time, schedules[i].origin, schedules[i].dest);
    }
}
