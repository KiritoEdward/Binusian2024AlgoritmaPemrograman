#include<stdio.h>
#include <string.h>

int main() {
    int n;
    FILE *fp = fopen("testdata.in","r");
    fscanf(fp,"%d\n",&n);

    char shortWord[n][50];
    char originalWord[n][50];
    for(int i=0;i<n;i++) {
 		fscanf(fp,"%[^#]#%[^\n]\n",shortWord[i],originalWord[i]);
    }
    
    int t;
    fscanf(fp,"%d\n", &t);
    
    for(int i=1;i<=t;i++) {
        printf("Case #%d:\n",i);
        char str[100][100];
        fscanf(fp,"%[^\n]\n",str[i]);
        char* token = strtok(str[i]," ");
        while(token != NULL) {
            int found = 0;
            for(int j=0;j<n;j++) {
                if(strcmp(token, shortWord[j]) == 0) {
                    printf("%s",originalWord[j]);
                    found = 1;
                    break;
                }
            }
            if(found == 0)
                printf("%s",token);

            token = strtok(NULL, " ");
            if(token != NULL)
                printf(" ");
        }   
        printf("\n");
    }
    return 0;
}
