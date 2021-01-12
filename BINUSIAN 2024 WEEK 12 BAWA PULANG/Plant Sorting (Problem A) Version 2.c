#include <stdio.h>
#include <string.h>

struct student{
    int nim;
    char name[45];
};

void merge(int start, int mid, int end, struct student students[]){
    int n1 = mid + 1 - start, n2 = end - mid, index = start, m;
    struct student left[n1], right[n2];

    for (m = 0; m < n1; m++){
        left[m] = students[index++];
    }
    for (m = 0; m < n2; m++){
        right[m] = students[index++];
    }
    
    int i = 0, j = 0; index = start;
    while (i  < n1 && j < n2){
        if(strcmp(left[i].name, right[j].name) <= 0){
            students[index++] = left[i++];
        } else {
            students[index++] = right[j++];
        }
    }

    while (i < n1){
        students[index++] = left[i++];
    }

    while (j < n2){
        students[index++] = right[j++];
    }
}

void mergeSort(int start, int end, struct student students[]){
    if(start < end){
        int mid = start + (end - start)/2;

        mergeSort(start, mid, students);
        mergeSort(mid + 1, end, students);


        merge(start, mid, end, students);
    }
}

int main(){
    FILE *input = fopen("testdata.in", "r");
    int t; fscanf(input ," %d", &t);
    struct student students[t];
    int C;
    for(C = 0; C < t; ++C){
        fscanf(input, " %d#%[^\n]", &students[C].nim, students[C].name);
    }
    mergeSort(0, t - 1, students);
    for(C = 0; C < t; C++){
        printf("%d %s\n", students[C].nim ,students[C].name);
    }
}
