#include<stdio.h>

int main(){ 
    int counter,n;
    scanf("%d",&counter);
    for(int i=0;i<counter;i++){
    	scanf("%d",&n);
    	int arr[n+1];
    	for(int j=1;j<=n;j++){
    		scanf("%d",&arr[j]);
		}
		int simpan,simpan2;
		if (arr[1] > arr[2]) 
	    { 
	        simpan = arr[1]; 
	        simpan2 = arr[2]; 
	    } 
	    else
	    { 
	        simpan = arr[2]; 
	        simpan2 = arr[1]; 
	    }
	    for (int i = 3; i<=n; i ++) 
	    { 
	        if (arr[i] > simpan) 
	        { 
	            simpan2 = simpan; 
	            simpan = arr[i]; 
	        } 
	  
	        else if (arr[i] > simpan2 && arr[i] != simpan) 
	            simpan2 = arr[i]; 
	    } 
		printf("Case #%d: %d\n",i+1,(simpan+simpan2));
	}
    return 0; 
} 
