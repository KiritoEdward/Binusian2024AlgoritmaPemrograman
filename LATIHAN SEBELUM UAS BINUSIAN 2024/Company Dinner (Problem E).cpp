#include<stdio.h>

long long int first(long long int arr[], long long int low, long long int high, long long int x, long long int n) 
{ 
	if(high >= low) 
	{ 
		long long int mid = (low + high)/2;
		if( ( mid == 0 || x > arr[mid-1]) && arr[mid] == x) 
		  return mid; 
		else if(x > arr[mid]) 
		  return first(arr, (mid + 1), high, x, n); 
		else
		  return first(arr, low, (mid -1), x, n); 
	} 
	return -1; 
} 

long long int last(long long int arr[], long long int low, long long int high, long long int x, long long int n) 
{ 
	if (high >= low) 
	{ 
		long long int mid = (low + high)/2;
		if( ( mid == n-1 || x < arr[mid+1]) && arr[mid] == x ) 
		  return mid; 
		else if(x < arr[mid]) 
		  return last(arr, low, (mid -1), x, n); 
		else
		  return last(arr, (mid + 1), high, x, n);       
	} 
	return -1; 
} 

long long int count(long long int arr[], long long int x, long long int n) 
{ 
	int i; 
	int j; 
	
	i = first(arr, 0, n-1, x, n); 
	
	if(i == -1) 
		return i; 
	
	j = last(arr, i, n-1, x, n);      
	
	return j-i+1; 
} 

int main() 
{ 
	long long int jumlahMakanan,jumlahPertanyaan;
	scanf("%lld %lld",&jumlahMakanan,&jumlahPertanyaan); getchar();
	
	long long int isiMakanan[jumlahMakanan];
	for(int i = 0 ; i < jumlahMakanan ; i++)
	{
		scanf("%lld",&isiMakanan[i]); getchar();
	}
	
	long long int x;
	for(int j = 0 ; j < jumlahPertanyaan ; j++)
	{
		scanf("%lld",&x); getchar();
		long long int c = count(isiMakanan, x, jumlahMakanan);
		if(c==-1)
		{
			printf("%lld\n",0);
		}
		else
		{
			printf("%lld\n",c);
		}
	}
	
	return 0; 
}
