#include <stdio.h>

struct citytemp{
  char city[1001];
  float temp;
  char symbol;
  float absolutetemp;
}citys[100];

void combine(int start, int mid, int end){
  int n1 = mid - start + 1, n2 = end - mid, idx = start;
  struct citytemp left[n1], right[n2];

  for (int i = 0; i < n1; ++i){
    left[i] = citys[idx++];
  }
  for (int i = 0; i < n2; ++i){
    right[i] = citys[idx++];
  }

  idx = start;
  int i = 0, j = 0;
  while (i < n1 && j < n2){
    if(left[i].absolutetemp < right[j].absolutetemp){
      citys[idx++] = left[i++];
    } else {
      citys[idx++] = right[j++];
    }
  }
  while (i < n1){
    citys[idx++] = left[i++];
  }
  while (j < n2){
    citys[idx++] = right[j++];
  }
}

void split (int start, int end){
  if(start < end){
    int mid = start + (end - start)/2;

    split(start, mid);
    split(mid + 1, end);

    combine(start, mid , end);
  }
}

int main(){
  FILE *input = fopen("testdata.in", "r");
  int idx = 0;
  while (!feof(input)){
    fscanf(input, " %[^#]#%f#%c\n", citys[idx].city, &citys[idx].temp, &citys[idx].symbol);
    if(citys[idx].symbol == 'F'){
      citys[idx].absolutetemp = (citys[idx].temp - 32) * 5 / 9;
    } else {
      citys[idx].absolutetemp = citys[idx].temp;
    }
    idx++;
  }
  split(0, idx - 1);
  for (int i = 0; i < idx; ++i){
    printf("%s is %.2f%c\n",citys[i].city, citys[i].temp, citys[i].symbol);
  }
}
