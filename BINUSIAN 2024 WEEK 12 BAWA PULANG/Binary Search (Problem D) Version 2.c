#include <stdio.h>

long long unsigned int binarySearch(long long unsigned int n, long long unsigned target){
    long long unsigned int i = 1, j = n, mid = 0;
    while (i <= j && target >= i*(i+1)*(2*i+1)/6 && target <= j*(j+1)*(2*j+1)/6) {
        mid = i + (((double)(j - i) / (j*(j+1)*(2*j+1)/6 - i*(i+1)*(2*i+1)/6)) * (target - i*(i+1)*(2*i+1)/6));

        if (mid*(mid+1)*(2*mid+1)/6 == target){
            return mid;
        }

        if (target < mid*(mid+1)*(2*mid+1)/6) {
            if (target > (mid-1)*(mid)*(2*(mid-1)+1)/6){
                return mid;
            }
            j = mid;
        }
        else {
            if (target < (mid + 1)*(mid+2)*(2*(mid+1)+1)/6){
                return mid + 1;
            }
            i = mid + 1;
        }
    }
    return mid;
}

int main(){
    int t; scanf(" %d",&t);
    for (int C = 1; C <= t; ++C){
        long long unsigned int m; scanf(" %llu", &m);
        printf("Case #%d: %llu\n", C, binarySearch(1442250, m));
    }
}
