#include <stdio.h>
#include <string.h>

int main(){
    char kalimatAngka[4][9][36];

    strcpy(kalimatAngka[0][0],"unu");
    strcpy(kalimatAngka[0][1],"du");
    strcpy(kalimatAngka[0][2],"tri");
    strcpy(kalimatAngka[0][3],"kvar");
    strcpy(kalimatAngka[0][4],"kvin");
    strcpy(kalimatAngka[0][5],"ses");
    strcpy(kalimatAngka[0][6],"sep");
    strcpy(kalimatAngka[0][7],"ok");
    strcpy(kalimatAngka[0][8],"nau");

    strcpy(kalimatAngka[1][0],"dek");
    strcpy(kalimatAngka[1][1],"dudek");
    strcpy(kalimatAngka[1][2],"tridek");
    strcpy(kalimatAngka[1][3],"kvardek");
    strcpy(kalimatAngka[1][4],"kvindek");
    strcpy(kalimatAngka[1][5],"sesdek");
    strcpy(kalimatAngka[1][6],"sepdek");
    strcpy(kalimatAngka[1][7],"okdek");
    strcpy(kalimatAngka[1][8],"naudek");

    strcpy(kalimatAngka[2][0],"cent");
    strcpy(kalimatAngka[2][1],"ducent");
    strcpy(kalimatAngka[2][2],"tricent");
    strcpy(kalimatAngka[2][3],"kvarcent");
    strcpy(kalimatAngka[2][4],"kvincent");
    strcpy(kalimatAngka[2][5],"sescent");
    strcpy(kalimatAngka[2][6],"sepcent");
    strcpy(kalimatAngka[2][7],"okcent");
    strcpy(kalimatAngka[2][8],"naucent");

    strcpy(kalimatAngka[3][0],"mil");
    strcpy(kalimatAngka[3][1],"du mil");
    strcpy(kalimatAngka[3][2],"tri mil");
    strcpy(kalimatAngka[3][3],"kvar mil");
    strcpy(kalimatAngka[3][4],"kvin mil");
    strcpy(kalimatAngka[3][5],"ses mil");
    strcpy(kalimatAngka[3][6],"sep mil");
    strcpy(kalimatAngka[3][7],"ok mil");
    strcpy(kalimatAngka[3][8],"nau mil");
    
    int t; scanf(" %d", &t);
    for (int C = 1; C <= t; C++){
        int n; scanf(" %d", &n);
        int temp = n, count = 0;
        int arr[3], idx = 0;
        while (temp > 9){
            arr[idx++] = temp%10;
            temp/=10;
            count++;
        }
        if(temp>0){
            printf("Case #%d: %s",C , kalimatAngka[count--][temp-1]);
        }
        for (int i = idx - 1; i >= 0; i--){
            count--;
            if(arr[i] > 0){
                printf(" %s", kalimatAngka[count+1][arr[i]-1]);
            }
        }
        puts("");
    }
}
