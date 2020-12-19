#include <stdio.h>

void merge(int *arr, int start, int mid, int end){
  int n1 = mid - start + 1, n2 = end - mid, left[n1], right[n2], index = start;

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

void mergesort(int *arr, int start, int end){
  if (start < end){
    int mid = start + (end - start)/2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
  }
}

void search(int *arr, int key, int size){
  int left = 0, right = size - 1;
  while(arr[left] <= key && arr[right] >= key){
    int check = left + ((double) (key - arr[left]) / (arr[right] - arr[left])) * (right - left);
    if(arr[check] == key){
      printf("%d\n", check + 1);
      return;
    } else if(arr[check] > key){
      right = check - 1;
    } else {
      left = check + 1;
    }
  }
  printf("-1\n");
}

int main(){
  int n; scanf(" %d", &n);
  int arr[n];
  for (int i = 0; i < n; ++i){
    scanf(" %d", &arr[i]);
  }
  mergesort(arr, 0, n-1);
  int t; scanf(" %d", &t);
  for (int i = 0; i < t; ++i){
    int key; scanf(" %d", &key);
    search(arr, key, n);
  }
}
