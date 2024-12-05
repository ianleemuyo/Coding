#include <stdio.h>

int main()
{
    int age;
    int ideal_age;
    char name[80];

    printf("Enter your name:");
    scanf("%s", &name);
    printf("Please enter your age:");
    scanf("%d", &age);
    ideal_age = age/2 + 7;
    printf("%s, Your ideal partner's age is %d", name, ideal_age);

    return 0;


}