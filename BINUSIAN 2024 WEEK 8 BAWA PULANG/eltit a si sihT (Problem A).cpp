#include <stdio.h>

void printReverse(char string[], int index){
    if (index>=0){
        printf("%c",string[index]);
        printReverse(string,--index);
    }
}

int main() {
        int counter,length,i,count;
        char string[1001];
        scanf("%d",&counter);
        getchar();
        
        count = 1;                     
        while(count<=counter){  
	        gets(string);          
	        length = 0;               
	        for(i=0;string[i]!='\0';i++) 
	            length++;
	            
	            printf("Case #%d: ",count);       
	            printReverse(string,length);  
	            printf("\n");                  
	            count++;                       
	    }
        return 0;
}
