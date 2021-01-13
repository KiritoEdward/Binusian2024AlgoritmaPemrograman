#include <stdio.h>

int main() {
    int n,m;
    scanf("%d",&n);
            scanf("%d",&m);
            int a[m][2];
            for(int i=0;i<m;i++)
            {
                int x,y;
                scanf("%d",&x);
                scanf("%d",&y);
                a[i][0]=x;
                a[i][1]=y;
            }
    if(m>=3 && n-m==1)
    {
        int p=0;
        for(int i=1;i<=n;i++)
        {
            int count=0;
            for(int j=0;j<m;j++)
            {
                if(i==a[j][0] || i==a[j][1]) 
                   count++;
            }
            if(count==m)
            {
                printf("YES\n");
                p=1;
                break;
            }
        }
            if(p==0)
            {
                printf("NO\n"); 
            }
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}
