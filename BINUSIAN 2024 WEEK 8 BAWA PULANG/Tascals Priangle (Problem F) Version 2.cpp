#include <stdio.h>

long long int pascal(int sequence, int start, int end, long long int total, int *temp){
	if(sequence == 0&&sequence == start){
		total++;
	} else {
		temp[sequence] = 1;
		int tempo = 1;
		for(int i = 1; i < sequence; i++){
 			int tempa = temp[i] + tempo;
			tempo = temp[i];
			temp[i] = tempa;
		}
 		if(sequence>=start){
			for(int i = 0; i <= sequence; i++){
				total += temp[i];
			}
		}
	}
	if(sequence<end){
		return pascal(sequence+1, start, end, total, temp);
	} else {
		return total;
	}
}

int main(){
	int t; scanf(" %d",&t);
	for(int C = 1; C <= t; C++){
		int start, end; scanf(" %d %d", &start, &end);
		int temp[100000];temp[0] = 1;
		printf("Case #%d: %lld\n", C, pascal(0, start-1, end-1 , 0, temp));
	}
}
