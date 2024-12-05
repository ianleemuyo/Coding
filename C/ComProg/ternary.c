#include<stdio.h>

int main()
{
    int number;
    
    printf("enter number:");
    scanf("%d", number);
    number%2 == 1? printf("it's odd"): printf("it's even");
    return 0;

}