#include <stdio.h>

int main(){ 
    long long int counter;
    long long int kiri,kanan;
    long long int pertama=1,kedua=1;
    long long int fibonacci;
    long long int jumlah=0;
    
    scanf("%lld",&counter);
    for(long long int i=1;i<=counter;i++){
        scanf("%lld %lld",&kiri,&kanan);
        jumlah=0;
        pertama = 1;
        kedua = 1;
        for(long long int j=1;j<=kanan;j++){
            if(j==1 || j==2)   {
                fibonacci=1;
            }else{
                fibonacci = pertama + kedua;
                pertama = kedua;
                kedua = fibonacci;
            }
            if(j>=kiri){
                while(fibonacci)  {
                    jumlah = jumlah + fibonacci%10;
                    fibonacci=fibonacci/10;
                }
            }
        }
        printf("Case #%lld: %lld\n",i,jumlah);
    }

    return 0;
}
