#include <stdio.h>

int main()
{
    int A = 0, B = 0, C = 0, D = 0, E = 0, F = 0, G = 0, H = 0, I = 0;
    scanf("%d %d %d %d", &A, &E, &I, &C); getchar();
    B = (A+E+I)-(A+C);
    H = (A+E+I)-(B+E);
    G = (A+E+I)-(H+I);
    D = (A+E+I)-(A+G);
    F = (A+E+I)-(D+E);
    printf("%d %d %d\n", A, B, C);
    printf("%d %d %d\n", D, E, F);
    printf("%d %d %d\n", G, H, I);
    return 0;
}
