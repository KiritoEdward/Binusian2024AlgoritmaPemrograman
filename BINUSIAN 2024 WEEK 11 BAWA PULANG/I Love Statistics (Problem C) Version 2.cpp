#include <stdio.h>

void merge(int *arr, int start, int mid, int end){
  int n1 = mid - start + 1, n2 = end - mid, left[n1], right[n2] , index = start;
  for(int i = 0; i < n1; ++i){
    left[i] = arr[index++];
  }
  for(int i = 0; i < n1; ++i){
    right[i] = arr[index++];
  }
  index = start;
  int i = 0, j = 0;
  while(i < n1 && j < n2){
    if(left[i] < right[j]){
      arr[index++] = left[i++];
    } else {
      arr[index++] = right[j++];
    }
  }
  while(i < n1){
    arr[index++] = left[i++];
  }
  while(j < n2){
    arr[index++] = right[j++];
  }
}

void mergesort(int *arr, int start, int end){
  if(start < end){
    int mid = start + (end - start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

int main(){
  int t; scanf(" %d", &t);
  for (int C = 1; C <= t; ++C){
    int n; scanf(" %d", &n);
    int arr[n];
    double total = 0;
    for (int i = 0; i < n; ++i){
      scanf(" %d", &arr[i]);
      total += arr[i];
    }
    mergesort(arr, 0, n-1);
    double median;
    if(((float)(n+1)/2)*10 > ((n+1)/2)*10){
      median = ((double)(arr[(n+1)/2-1] + arr[(n+1)/2]))/2;
    } else {
      median = arr[(n+1)/2-1];
    }
    printf("Case #%d:\nMean : %.2lf\nMedian : %.2lf\n", C, total/n, median);
  }
}
