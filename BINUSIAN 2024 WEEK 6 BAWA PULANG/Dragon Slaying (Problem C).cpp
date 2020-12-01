#include <stdio.h>

int main(){
    long long int n,k;
    scanf("%lld %lld",&n,&k);

    long long int arr[10000];
    for(long long int i=0;i<n;i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int damageMaksimal=0;
   
    for(long long int i=0;i<n-k+1;i++){
        long long int maksimalSementara=0;
        for(long long int j=i;j<k+i;j++){
            maksimalSementara+=arr[j];
        }
        if(damageMaksimal<maksimalSementara)
        	damageMaksimal=maksimalSementara;
    }
    printf("%lld\n",damageMaksimal);
    return 0;
}
