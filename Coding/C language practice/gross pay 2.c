#include <stdio.h>

int main() 
{
    int hourly_rate = 281;
    char name[80];
    int hours_worked = 0;

    // Reading name and hours worked
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);  // Allows spaces in name input

    printf("Enter your hours worked: ");
    scanf("%d", &hours_worked);

    // Calculating pay
    float gross_pay = hourly_rate * hours_worked;
    float withholding_tax = gross_pay * 0.32;
    float net_pay = gross_pay - withholding_tax;

    // Printing results
    printf("Name: %s", name);  
    printf("Your hourly rate: %d\n", hourly_rate);
    printf("Your hours worked: %d\n", hours_worked);
    printf("Your gross pay: %.2f\n", gross_pay);
    printf("Your withholding tax: %.2f\n", withholding_tax);
    printf("Your net pay: %.2f\n", net_pay);

    return 0;
}

