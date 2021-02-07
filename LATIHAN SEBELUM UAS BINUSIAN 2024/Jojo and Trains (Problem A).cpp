#include <stdio.h>
#include <string.h>

struct data
{
    char trainCode[1001];
    char trainTime[1001];
    char trainDestination[1001];
};

struct data jojoTrainCodeAndTime[1001];
struct data jojoTrainCodeAndDestination[1001];

int main()
{
    int N, i, j;
    scanf("%d", &N);
    getchar();
    for(i = 0; i < N; i++)
    {
        scanf("%[^ ] %[^\n]", jojoTrainCodeAndTime[i].trainCode, jojoTrainCodeAndTime[i].trainTime);
        getchar();
    }
    for(i = 0; i < N; i++)
    {
        scanf("%[^ ] %[^\n]", jojoTrainCodeAndDestination[i].trainCode, jojoTrainCodeAndDestination[i].trainDestination);
        getchar();
    }
    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            if(strcmp(jojoTrainCodeAndTime[i].trainCode, jojoTrainCodeAndDestination[j].trainCode) == 0)
            {
                strcpy(jojoTrainCodeAndTime[i].trainDestination, jojoTrainCodeAndDestination[j].trainDestination);
            }
        }
        printf("%s %s %s\n", jojoTrainCodeAndTime[i].trainCode, jojoTrainCodeAndTime[i].trainTime, jojoTrainCodeAndTime[i].trainDestination);
    }

    return 0;
}
