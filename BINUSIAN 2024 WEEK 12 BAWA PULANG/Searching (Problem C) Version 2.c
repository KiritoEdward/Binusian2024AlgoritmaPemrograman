#include <stdio.h>

struct student {
    int nim;
    char name[21];
};

int main(){
    FILE *input = fopen("testdata.in", "r");
    int t; fscanf(input, " %d", &t);
    struct student students[t];
    for (int i = 0; i < t; i++){
        fscanf(input, " %d %[^\n]", &students[i].nim, students[i].name);
    }
    int p; fscanf(input, " %d", &p);
    for (int i = 1; i <= p; i++){
        int nim; fscanf(input, " %d", &nim);
        for (int j = 0; j <= t; j++){
            if (students[j].nim == nim){
                printf("Case #%d: %s\n", i, students[j].name);
                break;
            }
            if(j == t){
                printf("Case #%d: N/A\n", i);
            }
        }
    }
}

