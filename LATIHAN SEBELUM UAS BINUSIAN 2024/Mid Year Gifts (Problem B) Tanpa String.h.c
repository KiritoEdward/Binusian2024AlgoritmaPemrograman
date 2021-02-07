#include <stdio.h>

struct data
{
    int R;
    char G[101];
};

struct data dt[1001];
struct data temp;

int main()
{
    int N, i, j, x, y;
    scanf("%d", &N);
    getchar();
    for(i = 0; i < N; i++)
    {
        scanf("%s %d", dt[i].G, &dt[i].R);
        getchar();
    }
    for(x = 0; x < N; x++)
    {
        for(y = N - 1; y > x; y--)
        {
            if(dt[y].R < dt[y - 1].R)
            {
                temp = dt[y];
                dt[y] = dt[y - 1];
                dt[y - 1] = temp;
            }
        }
    }
    for(i = 0; i < N; i++)
    {
        printf("Lecturer #%d: %s\n", dt[i].R, dt[i].G);
    }

    return 0;
}