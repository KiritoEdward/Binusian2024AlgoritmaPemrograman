#include <stdio.h>
#include <string.h>

struct video{
  char title[1001];
  char artist[1001];
  int view;
} videos[100];

void merge(int start, int mid, int end){
  int n1 = mid - start + 1, n2 = end - mid;
  struct video left[n1], right[n2];

  int index = start;
  for(int i = 0; i < n1; ++i){
    left[i] = videos[index++];
  }
  for(int i = 0; i < n2; ++i){
    right[i] = videos[index++];
  }
  int i = 0, j = 0;
  index = start;
  while(i < n1 && j < n2){
      if(left[i].view == right[j].view){
        if(strcmp(left[i].title, right[j].title) < 0){
          videos[index++] = left[i++];
        } else {
          videos[index++] = right[j++];
        }
      } else if(left[i].view > right[j].view){
        videos[index++] = left[i++];
      } else {
        videos[index++] = right[j++];
      }
  }

  while (i < n1){
    videos[index++] = left[i++];
  }

  while (j < n2){
    videos[index++] = right[j++];
  }
}

void mergesort(int start, int end){
  if(start < end){
    int mid = start + (end - start)/2;
    mergesort(start, mid);
    mergesort(mid + 1, end);
    merge(start, mid, end);
  }
}

int main (){
  FILE *input = fopen("testdata.in","r");
  int n = 0;
  while(!feof(input)){
    fscanf(input, " %[^#]#%[^#]#%d\n", videos[n++].title, videos[n].artist, &videos[n].view);
  }
  mergesort(0, n-1);
  for(int i = 0; i < n; ++i){
    printf("%s by %s - %d\n", videos[i].title, videos[i].artist, videos[i].view);
  }
}
