#include <stdio.h>

int main(){
    long long int N, T, i, j;
    long long int studentID[105], hasil;
    char name[105][25];
    long long int searching[105] = {0};
    
    FILE *fp = fopen("testdata.in", "r");
    
    fscanf(fp, "%lld\n", &N);
    for (i = 0; i < N; i++){
        fscanf(fp, "%lld %[^\n]\n", &studentID[i], name[i]);
    }
    
    fscanf(fp, "%lld\n", &T);
    for (i = 0; i < T; i++){
        fscanf(fp, "%lld\n", &searching[i]);
    }
    
    for (i = 0; i < T; i++){
        hasil = -1;
        int cocok = 1;
        if (studentID[0] == searching[i]){
            hasil = 0;
            cocok = 0;
        }
        else if (studentID[N - 1] == searching[i]){
            hasil = N - 1;
            cocok = 0;
        }
        if (cocok == 1){
            long long int first = 0;
            long long int last = N - 1;
            long long int middle = first + (last - first) / 2;
            while (first <= last){
                if (studentID[middle] < searching[i]){
                    first = middle + 1;
                }else if (studentID[middle] == searching[i]){
                    hasil = middle;
                    break;
                }else{
                    last = middle - 1;
                }
                middle = (first + last) / 2;
            }
        }
        if (hasil == -1){
            printf("Case #%lld: N/A\n", i + 1);
        }else{
            printf("Case #%lld: %s\n", i + 1, name[hasil]);
        }
    }
    return 0;
}
