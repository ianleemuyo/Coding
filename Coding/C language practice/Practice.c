#include <stdio.h>


int main() 
{
    char name[80];
    printf("Enter your name:");
    scanf("%s" , &name);
    printf("%s pangit mo" , &name);

    return 0;
}