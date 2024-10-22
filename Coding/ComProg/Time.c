#include <stdio.h>

int main()
{

    char name[80];
    int seconds;
    int minute;
    int hour;

    printf("Enter your name:");
    scanf("%s", &name);
    printf("Enter seconds:");
    scanf("%d", &seconds);

    hour = seconds/3600;
    seconds = seconds%3600;
    minute = seconds/60;
    seconds = seconds%60;
    


    printf("%s, The time is %.2d:%.2d:%.2d", name, hour, minute, seconds);


    return 0;

}