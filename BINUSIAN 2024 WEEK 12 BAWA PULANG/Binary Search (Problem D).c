#include <stdio.h>

int main(){
    long long int T, i, j;
    long long int M, N, hasil, temp, NN;
    scanf("%lld", &T);
    getchar();
    for (i = 1; i <= T; i++){
        scanf("%lld", &M);
        getchar();
        N = 1;
        hasil = 0;
        while (hasil < M){
            hasil = (N * (N + 1) * (2 * N + 1)) / 6;
            N += 10;
        }
        
        while(hasil >= M){
            NN = N - 1;
            temp = (NN * (NN + 1) * (2 * NN + 1)) / 6;
            if(temp < M){
                break;
            }else{
                N--;
            }
        }
        printf("Case #%lld: %lld\n", i, N);
    }
    return 0;
}
