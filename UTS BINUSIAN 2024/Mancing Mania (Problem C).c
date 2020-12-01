#include <stdio.h>

int main()
{
    int T, i;
    scanf("%d", &T);
    for (i = 1; i <= T; i++)
    {
        int X, D, V, K, Y, W, j, jsakana, ji = 0, pun = 0, byou = 0;
        scanf("%d %d %d %d %d %d", &X, &W, &D, &V, &K, &Y);
        jsakana = D;
        switch (X)
        {
        case 1:
            if (W > 450)
            {
                printf("Case #%d: Line broke up\n", i);
                break;
            }
            while (jsakana > 0)
            {
                for (j = 0; j < Y; j++)
                {
                    jsakana += V;
                    byou++;
                }
                for (j = 0; j < Y; j++)
                {
                    jsakana -= 5;
                    V -= K;
                    if (V <= 0)
                        V = 0;
                    byou++;
                    if (jsakana <= 0)
                        break;
                }
            }
            while (byou > 59)
            {
                pun++;
                byou -= 60;
            }
            while (pun > 59)
            {
                ji++;
                pun -= 60;
            }
            printf("Case #%d: ", i);
            if (ji < 10)
                printf("0%d:", ji);
            else
                printf("%d:", ji);
            if (pun < 10)
                printf("0%d:", pun);
            else
                printf("%d:", pun);
            if (byou < 10)
                printf("0%d\n", byou);
            else
                printf("%d\n", byou);
            break;

        case 2:
            if (W > 900)
            {
                printf("Case #%d: Line broke up\n", i);
                break;
            }
            while (jsakana > 0)
            {
                for (j = 0; j < Y; j++)
                {
                    jsakana += V;
                    byou++;
                }
                for (j = 0; j < Y; j++)
                {
                    jsakana -= 5;
                    V -= K;
                    if (V <= 0)
                        V = 0;
                    byou++;
                    if (jsakana <= 0)
                        break;
                }
            }
            while (byou > 59)
            {
                pun++;
                byou -= 60;
            }
            while (pun > 59)
            {
                ji++;
                pun -= 60;
            }
            printf("Case #%d: ", i);
            if (ji < 10)
                printf("0%d:", ji);
            else
                printf("%d:", ji);
            if (pun < 10)
                printf("0%d:", pun);
            else
                printf("%d:", pun);
            if (byou < 10)
                printf("0%d\n", byou);
            else
                printf("%d\n", byou);
            break;

        case 3:
            if (W > 1320)
            {
                printf("Case #%d: Line broke up\n", i);
                break;
            }
            while (jsakana > 0)
            {
                for (j = 0; j < Y; j++)
                {
                    jsakana += V;
                    byou++;
                }
                for (j = 0; j < Y; j++)
                {
                    jsakana -= 5;
                    V -= K;
                    if (V <= 0)
                        V = 0;
                    byou++;
                    if (jsakana <= 0)
                        break;
                }
            }
            while (byou > 59)
            {
                pun++;
                byou -= 60;
            }
            while (pun > 59)
            {
                ji++;
                pun -= 60;
            }
            printf("Case #%d: ", i);
            if (ji < 10)
                printf("0%d:", ji);
            else
                printf("%d:", ji);
            if (pun < 10)
                printf("0%d:", pun);
            else
                printf("%d:", pun);
            if (byou < 10)
                printf("0%d\n", byou);
            else
                printf("%d\n", byou);
            break;

        case 4:
            if (W > 3200)
            {
                printf("Case #%d: Line broke up\n", i);
                break;
            }
            while (jsakana > 0)
            {
                for (j = 0; j < Y; j++)
                {
                    jsakana += V;
                    byou++;
                }
                for (j = 0; j < Y; j++)
                {
                    jsakana -= 5;
                    V -= K;
                    if (V <= 0)
                        V = 0;
                    byou++;
                    if (jsakana <= 0)
                        break;
                }
            }
            while (byou > 59)
            {
                pun++;
                byou -= 60;
            }
            while (pun > 59)
            {
                ji++;
                pun -= 60;
            }
            printf("Case #%d: ", i);
            if (ji < 10)
                printf("0%d:", ji);
            else
                printf("%d:", ji);
            if (pun < 10)
                printf("0%d:", pun);
            else
                printf("%d:", pun);
            if (byou < 10)
                printf("0%d\n", byou);
            else
                printf("%d\n", byou);
            break;

        case 5:
            if (W > 4500)
            {
                printf("Case #%d: Line broke up\n", i);
                break;
            }
            while (jsakana > 0)
            {
                for (j = 0; j < Y; j++)
                {
                    jsakana += V;
                    byou++;
                }
                for (j = 0; j < Y; j++)
                {
                    jsakana -= 5;
                    V -= K;
                    if (V <= 0)
                        V = 0;
                    byou++;
                    if (jsakana <= 0)
                        break;
                }
            }
            while (byou > 59)
            {
                pun++;
                byou -= 60;
            }
            while (pun > 59)
            {
                ji++;
                pun -= 60;
            }
            printf("Case #%d: ", i);
            if (ji < 10)
                printf("0%d:", ji);
            else
                printf("%d:", ji);
            if (pun < 10)
                printf("0%d:", pun);
            else
                printf("%d:", pun);
            if (byou < 10)
                printf("0%d\n", byou);
            else
                printf("%d\n", byou);
            break;
        }
    }

    return 0;
}
