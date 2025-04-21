#include <stdio.h>

int main()
{
    int two;
    int four;
    int seven;
    int twenty_six;
    char name[80];

    printf("Enter your name:");
    scanf("%s", &name);
    printf("Enter your first number:");
    scanf("%d", &two);
    printf("Enter your second number:");
    scanf("%d", &four);
    printf("Enter your third number:");
    scanf("%d", &seven);

    twenty_six = two + four + seven;
    twenty_six = twenty_six * 2;

    printf("%s, Twice the sum of your numbers is %d :):):)\n", name, twenty_six);

    return 0;


}