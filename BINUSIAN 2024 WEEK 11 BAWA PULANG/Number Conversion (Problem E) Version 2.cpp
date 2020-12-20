#include <stdio.h>
#include <stdbool.h>

int main(){
  long long int t; scanf(" %d", &t);
  for (long long int C = 1; C <= t; ++C){
    long long int n; scanf(" %d", &n);
    long long int arr[n];
    bool arrbool[n];
    for(long long int i = 0; i < n; ++i){
      scanf(" %lld", &arr[i]);
      arrbool[i] = false;
    }
    long long int low1 = arr[0], low2 = arr[0], highest = arr[0];
    for(long long int i = 1; i < n; ++i){
      if(low2 > arr[i]){
        low2 = arr[i];
      }
      if (highest < arr[i]){
        highest = arr[i];
      }
    }
    long long int counter = 1;
    low1 = low2;
    while(low1 < highest){
      low2 = highest;
      for(long long int i = 0; i < n; ++i){
        if(arr[i] == low1 && !arrbool[i]){
          arr[i] = counter;
          arrbool[i] = true;
        }
        if(low2 > arr[i] && !arrbool[i]){
          low2 = arr[i];
        }
      }
      low1 = low2;
      counter++;
    }
    for(long long int i = 0; i < n; ++i){
      if(arr[i] == low1 && !arrbool[i]){
        arr[i] = counter;
      }
    }
    printf("Case #%d:", C);
    for(long long int i = 0; i < n; ++i){
      printf(" %lld", arr[i]);
    }
    puts("");
  }
}
