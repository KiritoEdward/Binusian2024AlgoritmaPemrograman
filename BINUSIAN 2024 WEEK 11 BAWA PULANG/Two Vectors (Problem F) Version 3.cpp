#include <stdio.h>

void merge(long long int *arr, int start, int mid, int end){
  long long int n1 = mid - start + 1, n2 = end - mid, left[n1], right[n2], index = start;

  for (int i = 0; i < n1; ++i){
    left[i] = arr[index++];
  }
  for (int i = 0; i < n2; ++i){
    right[i] = arr[index++];
  }

  int i = 0, j = 0; index = start;
  while (i < n1 && j < n2){
    if (left[i] < right[j]){
      arr[index++] = left[i++];
    } else {
      arr[index++] = right[j++];
    }
  }

  while (i < n1){
    arr[index++] = left[i++];
  }

  while (j < n2){
    arr[index++] = right[j++];
  }

}

void mergesort(long long int *arr, int start, int end){
  if (start < end){
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
    long long int a[n], b[n];
    for (int i = 0; i < n; ++i){
      scanf(" %lld", &a[i]);
    }
    for (int i = 0; i < n; ++i){
      scanf(" %lld", &b[i]);
    }
    mergesort(a, 0, n-1);
    mergesort(b, 0, n-1);
    long long int sum = 0;
    for (int i = 0, j = n-1; i < n; ++i, j--){
        sum += a[i] * b[j];
    }
    printf("Case #%d: %lld\n", C, sum);
  }
}
