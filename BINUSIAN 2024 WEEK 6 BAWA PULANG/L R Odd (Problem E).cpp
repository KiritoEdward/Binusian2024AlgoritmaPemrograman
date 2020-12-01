#include<stdio.h>
  
int main() {
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n+1];
    a[0] = 0;
    for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
    
    int sum[n];
    sum[0] = a[0];

    for(int i=1;i<=n;i++){
        if(i%2 == 1)
            sum[i] = sum[i-1] + a[i];
        else 
            sum[i] = sum[i-1];
    }

    for(int i=0;i<m;i++){
        int l,r;
        scanf("%d %d",&l,&r);
        printf("%d\n",sum[r]-sum[l-1]);
    }

}
