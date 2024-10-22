#include <stdio.h>

int main() {
    int cash, thousands, five_hundreds, hundreds, fifties, twenties, tens, fives, ones;
    char name[80];
    printf("Enter your name:");
    scanf("%s", name);
    printf("Enter cash on hand: ");
    scanf("%d", &cash);



    // Calculate denominations
    thousands = cash / 1000;
    cash = cash % 1000;

    five_hundreds = cash / 500;
    cash = cash % 500;

    hundreds = cash / 100;
    cash = cash % 100;

    fifties = cash / 50;
    cash = cash % 50;

    twenties = cash / 20;
    cash = cash % 20;

    tens = cash / 10;
    cash = cash % 10;

    fives = cash / 5;
    cash = cash % 5;

    ones = cash;

    // Display the results
    printf("%s, This is the denominations of your cash:\n", name);
    printf("1000 - %d\n", thousands);
    printf("500 - %d\n", five_hundreds);
    printf("100 - %d\n", hundreds);
    printf("50 - %d\n", fifties);
    printf("20 - %d\n", twenties);
    printf("10 - %d\n", tens);
    printf("5 - %d\n", fives);
    printf("1 - %d\n", ones);

    return 0;
}
