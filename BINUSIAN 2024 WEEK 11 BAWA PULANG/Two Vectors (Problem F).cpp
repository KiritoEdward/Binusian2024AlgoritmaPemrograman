 #include<stdio.h>
 
 void quickSortAsc(long long int a[], long long int lo, long long int hi){ 
    long long int i=lo, j=hi, h; 
    long long int pivot=a[lo]; 
    do{ 
        while (a[i]<pivot) i++; 
        while (a[j]>pivot) j--; 
        if (i<=j) 
        { 
            h=a[i]; a[i]=a[j]; a[j]=h;
            i++; j--; 
        } 
    } while (i<=j); 
    if (lo<j) quickSortAsc(a, lo, j); 
    if (i<hi) quickSortAsc(a, i, hi); 
}

void quickSortDesc(long long int a[], long long int left, long long int right){
	long long int i = left;
	long long int j = right;
	long long int temp = a[i];
	
	if( left < right){
	while(i < j){
		while(a[j] <= temp && i < j){
		    j--;
		}
		a[i] = a[j];
		while(a[i] >= temp && i < j){
			i++;
		}
		a[j] = a[i];
	}
		a[i] = temp;
		quickSortDesc(a, left, i - 1);
		quickSortDesc(a, j + 1, right);
	}
} 
 
long long int mul(long long int A[], long long int B[], long long int size){ 
	int i, sum = 0; 
	for(i = 0; i < size; i++) 
		sum = sum + (A[i] * B[i]); 
	return sum; 
} 

int main(){ 
	long long int n, T, i, test; 
	scanf("%lld", &T); getchar();
	for(test = 0; test < T; test++) { 
		long long int result = 0; 
		scanf("%lld", &n); getchar();
		long long int A[n];
		long long int B[n]; 
		for(i = 0; i < n; i++){
			scanf("%lld", &A[i]);
			getchar();
		}
		for(i = 0; i < n; i++){
			scanf("%lld", &B[i]); 
			getchar();
		}
		quickSortAsc(A,0,n-1);
		quickSortDesc(B,0,n-1);
		result = mul(A, B, n); 
		printf("Case #%lld: %lld\n",test+1, result); 
	}
	return 0;
}
