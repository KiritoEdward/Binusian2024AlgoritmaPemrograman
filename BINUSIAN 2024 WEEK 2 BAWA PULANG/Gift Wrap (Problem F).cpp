#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, awal, r, hasil;
    const double pi = 3.14159265359;
    scanf("%lf %lf %lf", &A, &B, &C); getchar();
    awal = sqrt(A*A + B*B);
    r = (sqrt(awal*awal + C*C))/2;
    hasil = 4*r*r*pi;
    printf("%.2lf\n", hasil);
    return 0;
}
