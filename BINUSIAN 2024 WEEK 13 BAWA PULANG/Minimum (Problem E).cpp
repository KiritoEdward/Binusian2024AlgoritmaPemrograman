#include <stdio.h>

long long int ans = 2147483647;

int binarySearch(long long int arr[], long long int l, long long int r, int n, long long int x)
{
    if (l<=r)
    {
        long long int mid = l + (r - l) / 2;
        if (arr[mid]<= x && ans>mid)
            ans=mid;
        if (arr[mid] > x)
            binarySearch(arr, mid+1, r, n, x);
        else
        	binarySearch(arr, l, mid-1, n, x);
    }
}

int main()
{
    int n,m;   scanf("%d %d",&n,&m);

    long long int arr[n];
    long long int temp[n];
    long long int brr[m];

    for(int i=0;i<n;i++)
    scanf("%lld",&arr[i]);

    for(int i=0;i<m;i++)
		scanf("%lld",&brr[i]);

    temp[0]=arr[0];

    for(int i=1;i<n;i++)
    {
        if(arr[i]<temp[i-1])
            temp[i]=arr[i];
        else
            temp[i]=temp[i-1];
    }

    for(int i=0;i<m;i++)
    {
        ans = 2147483647;
        long long int x=brr[i];
        long long int l=0,r=n-1;

        if(brr[i]<temp[r])
            printf("-1\n");
        else
        {
            binarySearch(temp, l, r, n, x);
            printf("%lld\n",ans+1);
        }
    }
    return 0;
}
