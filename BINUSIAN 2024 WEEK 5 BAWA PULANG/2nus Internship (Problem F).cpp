#include<stdio.h>

int main(){
   long long int i,j,N,M;
   long long int A[500][500];
   long long int penjumlahanKolom=0, perkalian=1;
   
    scanf("%lld %lld", &N, &M);
    
   for(i=0; i<N;i++){
       for(j=0;j<M;j++){
            scanf("%lld",&A[i][j]);
       }
   }
   
   for(j=0; j<M;j++){
       penjumlahanKolom = 0;
       for(i=0;i<N;i++){
           penjumlahanKolom += A[i][j];
       }  
       perkalian = (perkalian * (penjumlahanKolom % 1000000007)) % 1000000007;
   }

   printf("%lld\n",perkalian);
}
