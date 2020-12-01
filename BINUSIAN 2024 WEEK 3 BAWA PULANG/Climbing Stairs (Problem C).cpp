#include <stdio.h>
#include <stdlib.h>

int main(){
    int N;
    scanf("%d", &N);

    int* arr = (int*)malloc(N * sizeof(int));
    for (int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }

    int set_of_steps = 0;
    for (int i = 0; i < N; i++) {
        if (arr[i] == 1) {
            set_of_steps++;
        }
    }
    
    int* result = (int*)malloc(N * sizeof(int));
    int idx = 0;
    
    int prev_idx = 0, curr_idx = 0;
    for (int i = 1; i < N; i++) {
        if (arr[i] == 1) {
            curr_idx = i;
            result[idx++] = curr_idx - prev_idx;
            prev_idx = curr_idx;
        }
    }

    result[idx] = N - curr_idx;
    
    int* ans = result;

    for (int i = 0; i < set_of_steps; i++) {
    	if(i==set_of_steps-1){
    		printf("%d", ans[i]);
		}else{
			printf("%d ", ans[i]);
		}        
    }

    return 0;
}
