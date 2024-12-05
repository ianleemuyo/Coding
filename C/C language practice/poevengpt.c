#include <stdio.h>

int main() {
    int number = 0;

    printf("Enter Number: ");
    scanf("%d", &number);

    if (number == 0) {
        printf("The number is zero and even\n");
    } else if (number > 0) {
            number = number%2;
        if (number == 0) {
            printf("The number is positive and even\n");
        } else {
            printf("The number is positive and odd\n");
        } }
    else if (number < 0 ) {
        number = number%2;
        if (number == 0) {
            printf("The number is negative and even\n");
        } else {
            printf("The number is negative and odd\n");
        } }
    

    return 0;
}
