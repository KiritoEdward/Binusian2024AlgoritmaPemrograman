#include <stdio.h>
#include <string.h>

struct hacking{
    char name[30];
    long long int salary1;
    long long int salary2;
    long long int salary3;
};

struct hacking data[155];

int main()
{
    long long int counter, N, Q, i, j, k, l;
    scanf("%lld", &counter);
    getchar();
    for (i = 1; i <= counter; i++)
    {
        scanf("%lld %lld", &N, &Q);
        getchar();
        long long int a[Q], U[Q], V[Q];
        for (j = 0; j < N; j++)
        {
            scanf("%s %lld %lld %lld", &data[j].name, &data[j].salary1, &data[j].salary2, &data[j].salary3);
            getchar();
        }
        for (j = 0; j < Q; j++)
        {
            scanf("%lld %lld %lld", &a[j], &U[j], &V[j]);
            getchar();
            U[j]--;
            V[j]--;
        }
        Q--;
        while (Q >= 0)
        {
            long long int x = U[Q];
            long long int y = V[Q];
            if (a[Q] == 1)
            {
                long long int temp[3];
                for (k = x; k < y; k++)
                {
                    temp[0] = data[k].salary1;
                    temp[1] = data[k].salary2;
                    temp[2] = data[k].salary3;
                    data[k].salary1 = data[y].salary1;
                    data[k].salary2 = data[y].salary2;
                    data[k].salary3 = data[y].salary3;
                    data[y].salary1 = temp[0];
                    data[y].salary2 = temp[1];
                    data[y].salary3 = temp[2];
                    y--;
                }
            }
            else if (a[Q] == 2)
            {
                long long int temp;
                for (k = x; k <= y; k++)
                {
                    temp = data[k].salary3;
                    data[k].salary3 = data[k].salary2;
                    data[k].salary2 = data[k].salary1;
                    data[k].salary1 = temp;
                }
            }
            Q--;
        }
        printf("Case #%lld:\n", i);
        for (j = 0; j < N; j++)
            printf("%s %lld\n", data[j].name, data[j].salary3);
    }

    return 0;
}
