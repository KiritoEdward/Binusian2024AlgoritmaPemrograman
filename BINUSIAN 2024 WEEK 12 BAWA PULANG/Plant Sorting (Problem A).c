#include <stdio.h>
#include <string.h>

struct data{
    int identificationNum;
    char name[50];
};
struct data input[1005];


int main(){
    struct data temp;
    int jumlah;
    int i, j;
    
    FILE *fp = fopen("testdata.in", "r");
    fscanf(fp, "%d\n", &jumlah);
    
    for(i = 0; i < jumlah; i++){
        fscanf(fp, "%d#%[^\n]\n", &input[i].identificationNum, input[i].name);
    }
    
    for(i = 0; i < jumlah; i++){
        for(j = jumlah - 1; j > i; j--){
            if(strcmp(input[i].name, input[j].name) > 0){
                temp = input[i];
                input[i] = input[j];
                input[j] = temp;
            }
        }
    }
    
    for(i = 0; i < jumlah; i++){
        printf("%d %s\n", input[i].identificationNum, input[i].name);
    }
    return 0;
}
