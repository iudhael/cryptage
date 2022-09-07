#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
    //int i;
    int a;

    time_t secondes;
    struct tm instant;

    while (1==1)
    {
        time(&secondes);
        instant =*localtime(&secondes);
        printf("Horlorge\n");
        printf("%d:%d:%d\n", instant.tm_hour, instant.tm_min, instant.tm_sec);

        system("color ");

        system("cls");
    }
    scanf("%d",&a);
    if (a==1)
    {
        return 0;
    }

    return 0;
}
