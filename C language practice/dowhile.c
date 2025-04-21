#include <stdio.h>

int main()
{
    int number = 0;
    int sum = 0;

do  {
        printf("Enter a # above 0 and then enter 0 if you want the of all given number: ");
        scanf("%d", &number);
        if(number > 0)
        {
            sum += number;
        }
    } while(number > 0);

    printf("sum: %d", sum);



    return 0;
}