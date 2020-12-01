#include <stdio.h>
#include <math.h>

int main() {
    double N,S,A,B,C;
    scanf("%lf %lf %lf %lf %lf",&N,&S,&A,&B,&C);
    A=A/S;
    B=B/S;
    C=C/S;
    double container=ceil((double)N/(A*B*C));
    printf("%.lf\n",container);
    return 0;
}
