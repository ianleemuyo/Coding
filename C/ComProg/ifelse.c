#include <stdio.h>

int main()
{
    int number;
    char name[80];

    printf("Enter your name:");
    scanf("%s", &name);
    printf("Enter your number:");
    scanf("%d", &number);
    if (number%2 == 1)
    {
        printf("your number is odd\n");
    } 
    else 
    {
        printf("Your number is even\n");
    }
    printf("%s Thank you for using my program\n", name);

    return 0;
}