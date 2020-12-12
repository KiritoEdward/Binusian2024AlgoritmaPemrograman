#include <stdio.h>

int main(){
  FILE *input = fopen("testdata.in", "r");
  int t; fscanf(input, " %d", &t);
  for (int C = 1; C <= t; ++C){
    int n; fscanf(input, " %d", &n);
    int arr[n+1]; arr[n] = 0;
    long long int area = 0;
    for(int i = 0; i < n; ++i){
      fscanf(input, " %d", &arr[i]);
      area += arr[i] * 4;
    }
    long long int perimeter = n * 4 + arr[0] * 2;
    for(int i = 0; i < n; ++i){
      int diff = (arr[i] - arr[i+1]);
      if(diff < 0){
        diff = -diff;
      }
      perimeter += diff * 2;
    }
    printf("Case #%d: %lld %lld\n", C, perimeter, area);
  }
}
