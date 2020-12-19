#include<stdio.h>
#include<string.h>

void swap (char array[][105], int a, int b)
{
    char holder[105];
    strcpy(holder,array[a]);
    strcpy(array[a],array[b]);
    strcpy(array[b],holder);
}

void quick_sort (char array[][105], int left, int right)
{
    int pivot;
    int i;
    int j;
    char key[105];

    if (right - left == 1) {
        if (strcmp (array[left], array[right]) > 0) {
            swap (array, left, right);
        }
        return;
    }

    pivot = (left + right) / 2;
    strcpy(key,array[pivot]);

    swap (array, left, pivot);

    i = left + 1;
    j = right;

    while (i < j) {
        while (i <= right && strcmp (array[i], key) < 0) {
            i++;
        }
        while (j >= left && strcmp (array[j], key) > 0) {
            j--;
        }
        if (i < j) {
            swap (array, i, j);
        }
    }
        
    swap (array, left, j);

    if (left < j - 1) {
        quick_sort (array, left, j - 1);
    }
    if (j + 1 < right) {
        quick_sort (array, j + 1, right);
    }
}

int main()
{
    int counter,i,N,indexCari;
    scanf("%d",&counter);
    for(int k=0 ; k < counter ; k++){
    	scanf("%d %d",&N,&indexCari);
	    char A[N][105],X[105];
	    int B[N],C[N];
	    for(int i=0;i<N;i++){
	        scanf("%s",&A[i]);  
	    }     
	    quick_sort (A, 0, N - 1);
	    printf("Case #%d: %s\n",k+1,A[indexCari-1]);
	}
    return 0;
}
