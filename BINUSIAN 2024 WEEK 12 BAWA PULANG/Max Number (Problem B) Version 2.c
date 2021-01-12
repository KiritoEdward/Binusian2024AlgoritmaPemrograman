#include <stdio.h>
#include <stdlib.h>

int main(){
    int *nums = calloc(999, sizeof(int));
    int t, p; scanf(" %d %d", &t, &p);
    for (int i = 0; i < t; ++i){
        int index; scanf(" %d", &index);
        nums[index] = 1;
    }
    for (int i = 0; i < p; ++i){
        int index; scanf(" %d", &index);
        nums[index] = 0;
    }
    for (int i = 999; i >= -1; --i){
        if (i == -1){
            printf("Maximum number is %d\n", i);
            break;
        }
        if(nums[i] == 1){
            printf("Maximum number is %d\n", i);
            break;
        }
    }
}
