#include<stdio.h>
int main(){
   long int n,k,d;
   scanf("%ld %ld %ld",&n,&k,&d);
   printf("%ld\n",n/(k+1)*k*d+(n%(k+1))*d);
   return 0;
}
