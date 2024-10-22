#include <stdio.h>

int main () 
{

    int hourly_rate = 281;
    char name[100];
    int hours_worked = 0;
    float tax = .32;


    printf("enter your name:");
    scanf("%s" , &name);
    printf("enter your hours worked:");
    scanf("%d", &hours_worked);

    float gross_pay = hourly_rate * hours_worked;
    float withholding_tax = gross_pay * tax;
    float net_pay = gross_pay - withholding_tax;

    printf("%s\n" , &name);
    printf("Your hourly rate: %d\n" , hourly_rate);
    printf("Your hours worked: %d\n" , hours_worked);
    printf("Your gross pay: %.2f\n" , gross_pay);
    printf("Your withholding tax: %.2f\n" , withholding_tax);
    printf("Your net pay: %.2f\n" , net_pay);

    return 0;
}