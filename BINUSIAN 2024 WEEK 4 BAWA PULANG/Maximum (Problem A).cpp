#include<stdio.h>

int findLargestSumPair(int arr[], int n) 
{ 
    int first, second; 
    if (arr[0] > arr[1]) 
    { 
        first = arr[0]; 
        second = arr[1]; 
    } 
    else
    { 
        first = arr[1]; 
        second = arr[0]; 
    } 
  
    for (int i = 2; i<n; i ++) 
    { 
        if (arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
  
        else if (arr[i] > second && arr[i] != first) 
            second = arr[i]; 
    } 
    return (first + second); 
} 
  
  
int main() 
{ 
    int counter,n;
    scanf("%d",&counter);
    for(int i=0;i<counter;i++){
    	scanf("%d",&n);
    	int arr[n];
    	for(int j=0;j<n;j++){
    		scanf("%d",&arr[j]);
		}
		printf("Case #%d: %d\n",i+1,findLargestSumPair(arr, n));
	}
    return 0; 
} 
