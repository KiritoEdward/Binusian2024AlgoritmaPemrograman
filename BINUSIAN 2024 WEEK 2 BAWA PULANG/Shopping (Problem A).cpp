#include <stdio.h>

int main(){
    float diskon,harga;
    for(int i=0;i<4;i++){
        scanf("%f%f",&diskon,&harga);
        printf("$%.2f\n",harga*100/(100-diskon));
    }
    return 0;
}
