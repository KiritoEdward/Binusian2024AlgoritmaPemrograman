#include <stdio.h>

int main()
{
    long long int n,k;
    scanf("%lld %lld",&n,&k); getchar();
    long long int a[n];
    long long int i;
    for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
    long long int l=0,r=n-1;
    long long int maximum=-1;
    // Looping Array dan periksa apakah kondisi maksimum terpenuhi 
	// Perbarui maksimum jika sesuai kondisi di soal
    while(l<r)
    {   
    	// jika jumlah elemen saat ini kurang dari k
        if(a[l]+a[r]<=k)
        {
        	// jika jumlahnya lebih besar dari maksimum
            if(a[l]+a[r]>maximum)
            {
            	maximum=a[l]+a[r];	// perbarui maksimum
            	if(maximum==k)
            	{
            		break;
				}
			}
            l++;
        }
        else r--;
    }
    printf("%lld",maximum);
    return 0;
}
